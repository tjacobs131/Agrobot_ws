If you encounter issues with the steppers slowing down, it likely has to do with the code being too slow
Printing to serial is very expensive in compute time. You can try increasing the baud rate of serial communication

Using while loops block the serial communcation, use the built-in loop() function instead