#include "Arduino_EMBRYO_2.h"

#define OPEN 1
#define CLOSE 0

#define buffSize 256
char receiveBuffer[buffSize];
uint8_t receiveBufferSize = 0;

const int BackwardPin = 37;   // Backward Button X-axis
const int ForwardPin = 37;    // Forward Button X-axis
const int startPin = 37;      // Start Button
const int emergencyPin = 37;  // Emergency Button
const int FarEndstop = 37;    // Far From Home endstop X-axis


#define motor01 1

const int enablePin1 = 38;  // Enable Pin
const int DirPin1 = A1;     // Direction Pin for motor01
const int PulPin1 = A0;     // Step Pin for motor01

const int endstop1 = 15;  // Endstop 1


#define motor02 2

const int enablePin2 = 46;  // Enable Pin
const int DirPin2 = A7;     // Direction Pin for motor2
const int PulPin2 = A6;     // Step Pin for motor2

const int endstop2 = 14;  // Endstop 2


#define motor03 3

const int enablePin3 = A8;  // Enable Pin
const int DirPin3 = 48;     // Direction Pin for motor3
const int PulPin3 = 46;     // Step Pin for motor3

const int endstop3 = 2;  // Endstop 3


#define motor04 4

const int enablePin4 = 24;  // Enable Pin
const int DirPin4 = 28;     // Direction Pin for motor4
const int PulPin4 = 26;     // Step Pin for motor4

const int endstop4 = 3;  // Endstop 4

bool initialize = 1;
long steps = 0;

/* Construct object, Embryo(Axis, Enable Pin, Direction Pin, Pulse Pin, Endstop Home, Endstop Far, Forward Button, Backward Button, Start Button, Emergency) */

int motorAmount = 4;

StepMotor box[4] = { StepMotor(motor01, enablePin1, DirPin1, PulPin1, endstop1, FarEndstop, ForwardPin, BackwardPin, startPin, emergencyPin),
                     StepMotor(motor02, enablePin2, DirPin2, PulPin2, endstop2, FarEndstop, ForwardPin, BackwardPin, startPin, emergencyPin),
                     StepMotor(motor03, enablePin3, DirPin3, PulPin3, endstop3, FarEndstop, ForwardPin, BackwardPin, startPin, emergencyPin),
                     StepMotor(motor04, enablePin4, DirPin4, PulPin4, endstop4, FarEndstop, ForwardPin, BackwardPin, startPin, emergencyPin) };

void setup() {

  Serial.begin(9600);  // Configure and start Serial Communication

  while (!Serial) {};

  for (int i = 0; i < motorAmount; i++) {
    box[i].setSpeed(1000);
  }

  Serial.println("Homing complete");

  // for (int i = 0; i < motorAmount; i++){
  //   box[i].begin();
  //   box[i].startWithoutHoming();

  //   while(!box[i].readEndstopHome()){

  //     box[i].moveBackward();
  //   }
  // }


  // Serial.println("To start, send any key to serial ...");

  // // Without this instruction the motor will move after the upload (It is dangerous)
  // while((Serial.available() <= 0)){};
}

void loop() {

  if(initialize){
    box[0].begin();
    box[0].startWithoutHoming();

    Serial.println("Homing");

    while (!digitalRead(endstop1)) {
      Serial.println(digitalRead(endstop1));
      //box[0].moveBackward();
    }

    Serial.println("End");

    box[0].pause();

    initialize = 0;
  }

  Serial.print("1: ");
  Serial.print(digitalRead(endstop1) ? "high - " : "low - ");

  Serial.print("2: ");
  Serial.print(digitalRead(endstop2) ? "high - " : "low - ");

  Serial.print("3: ");
  Serial.print(digitalRead(endstop3) ? "high - " : "low - ");

  Serial.print("4: ");
  Serial.print(digitalRead(endstop4) ? "high - " : "low - ");

  Serial.println();

  delay(100);

  // Read from serial
  // Put result into buffer
  receiveBufferSize = 0;
  while (Serial.available() > 0) {
    receiveBuffer[receiveBufferSize] = char(Serial.read());
    if (receiveBufferSize < buffSize - 1)
      receiveBufferSize++;
  }

  // Process buffer
  receiveBuffer[receiveBufferSize] = 0;
  if (receiveBuffer[0] == '!')  // Check buffer starts with command symbol
  {
    // Remove command character
    String commandString = String(receiveBuffer);
    commandString.remove(0, 1);
    Serial.println(commandString);

    // Split commands
    char *part = strtok(commandString.c_str(), ",");

    bool bucketPositions[] = { CLOSE, CLOSE, CLOSE, CLOSE };

    while (part != NULL) {  // Process split parts
      int targetBox = 0;
      for (int i = 0; i < sizeof(part); i++) {
        switch (part[i]) {

          case 'O':  // Box should be opened
            Serial.print("Opening box: ");
            Serial.println(targetBox);
            break;
          case 'C':  // Box should be closed
            Serial.print("Closing box: ");
            Serial.println(targetBox);
            break;

          default:                                   // Determine target box
            targetBox = part[0] - '0';               // Convert from char to int
            if (targetBox >= 1 && targetBox <= 4) {  // If targetBox is in expected range
              continue;
            } else {
              targetBox = 0;
            }
            break;
        }
      }

      // Get the next part in the command string
      part = strtok(NULL, ",");
    }
  }
}