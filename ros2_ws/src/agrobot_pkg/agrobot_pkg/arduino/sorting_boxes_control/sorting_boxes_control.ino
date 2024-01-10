#define OPEN 1
#define CLOSE 0

#define mBackwards -1
#define mForwards 1
#define mStop 0

#define speedDelay 2 // Delay in ms between pulses
#define openPuls 900 // Amount of pulses to open box

#define motorCount 4

// Buffer to store strings from the serial reader
// Used to process commands received over serial
#define buffSize 256
char receiveBuffer[buffSize];
uint8_t receiveBufferSize = 0;

// Pin definitions
const int enablePin[]  = {38, A2, A8, 24};
const int dirPin[]     = {A1, A7, 48, 28};
const int stepPin[]    = {A0, A6, 46, 26};
const int endstopPin[] = {15, 14, 02, 03};

// Motor control variables
unsigned long lastStepTime [motorCount]; // Keeps track of when the last step was taken
int motorPosition [motorCount]; // Keeps track of the current step
int motorMove [motorCount]; // Direction in which the motor should move
bool motorPulse [motorCount]; // Decides whether or not to pulse the motor this arduino cycle
int targetPosition [motorCount]; // Position at which the motor should stop moving


void setup() {

  Serial.begin(9600);  // Configure and start Serial Communication

  while (!Serial) {}; // Wait for serial to be available

  // Setup
  for (int i = 0; i < motorCount; i++) {
    pinMode(enablePin[i], OUTPUT);
    pinMode(dirPin[i], OUTPUT);
    pinMode(stepPin[i], OUTPUT);
    pinMode(endstopPin[i], INPUT);

    Serial.print("Homing motor: ");
    Serial.println(i);

    // Calibrate motor positions
    enableMotor(i);
    homeMotor(i);
  }
}

void disableMotor (int m){
  digitalWrite(enablePin[m], HIGH);
}
void enableMotor (int m){
  digitalWrite(enablePin[m], LOW);
}


void homeMotor (int m){
  // Set direction
  digitalWrite(dirPin[m], HIGH);
  motorMove[m] = mBackwards;

  while(digitalRead(endstopPin[m])){ // Move motor until endstop is triggered
      // Pulse motor until endstop is pressed
      motorPulse[m] = !motorPulse[m];
      digitalWrite(stepPin[m], motorPulse[m]);
      delay(speedDelay);
  }

  // Motor is now at its home
  motorPosition[m] = 0; // Update home position
}

void setPosition (int m, int p){
  targetPosition[m] = p; 
}

void stepMotor (void){
  
  // Iterate through each motor
  for (int i = 0; i < motorCount; i++) {
    if(motorMove[i] == mForwards || motorMove[i] == mBackwards && // Check if the motor is supposed to be moving
        lastStepTime[i] + speedDelay <= millis() && // Check if the last step was not taken within the specified delay
        (!digitalRead(endstopPin[i]) && motorMove[i] == mBackwards || // Check that motor is not moving backwards when bucket is closed
        digitalRead(endstopPin[i] && motorMove[i] == mForwards))) {
      lastStepTime[i] = millis();
      motorPulse[i] = !motorPulse[i];
      digitalWrite(stepPin[i], motorPulse[i]);
      motorPosition[i] += motorMove[i];
    }

    // Update motor directions based on desired positions
    if(motorPosition[i] < targetPosition[i]){
      digitalWrite(dirPin[i], LOW);
      motorMove[i] = mForwards;
    }
    else if(motorPosition[i] > targetPosition[i]){
      digitalWrite(dirPin[i], HIGH);
      motorMove[i] = mBackwards;
    }
    else if(motorMove[i] != mStop) { // Stop motor when current position == target position
      motorMove[i] = mStop;
      Serial.println("!OK");
    }
  }
}
 
void loop() {
  delay(5);

  stepMotor();

  // Read from serial
  // Put result into buffer
  receiveBufferSize = 0;
  while (Serial.available() > 0) {
    delay(2);
    receiveBuffer[receiveBufferSize] = char(Serial.read());
    if (receiveBufferSize < buffSize - 1) {
      receiveBufferSize++;
    }
  }

  // Process serial buffer
  receiveBuffer[receiveBufferSize] = 0;
  if (receiveBuffer[0] == '!')  // Check buffer starts with command symbol
  {
    Serial.println("Processing command");

    // Remove command character
    String commandString = String(receiveBuffer);
    commandString.remove(0, 1);
    Serial.println(commandString);

    // Split commands
    char *part = strtok(commandString.c_str(), ",");

    // Store desired bucket positions
    bool bucketPositions[] = { CLOSE, CLOSE, CLOSE, CLOSE };
    int bucketPositionsLength = 4;

    while (part != NULL) {  // Process split parts
      int targetBox = 0;
      for (int i = 0; i < sizeof(part); i++) {
        switch (part[i]) {
          case 'O':  // Box should be opened
            if(targetBox != -1){
              bucketPositions[targetBox - 1] = OPEN; // Store desired position
            }
            break;

          case 'C':  // Box should be closed
            if(targetBox != -1){
              bucketPositions[targetBox - 1] = CLOSE; // Store desired position
            }
            break;

          default:                                   // Determine target box
            targetBox = part[0] - '0';               // Convert from char to int
            if (targetBox >= 1 && targetBox <= 4) {  // If targetBox is in expected range
              continue;
            } else {
              targetBox = -1;
            }
            break;
        }
      }

      // Get the next part in the command string
      part = strtok(NULL, ",");
    }

    // Change bucket positions to desired positions
    move_boxes(bucketPositions, bucketPositionsLength);
  }
}

void move_boxes(bool positions[], int length){
  for(int i = 0; i < length; i++){
    if(positions[i] == OPEN){
      open_box(i, openPuls);
    }
    if(positions[i] == CLOSE){
      close_box(i);
    }
  }
}

void open_box(int m, int p) {
  setPosition(m, p);
}

void close_box(int m){
  setPosition(m, 0);
}