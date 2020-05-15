# Linefollower Arduino library


> This library for Arduino for you to make a line follower robot  with simple code.



## Ciruit Diagram
+ ![Wiring](https://github.com/Ishthiaq-Hussain/LINE-FOLLOWER-LIBRARY/blob/master/circuit%20diagram_bb.jpg)

## Installation
[Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Usage
+ Include library file header
```cpp
#include <Linefollower.h>
```

+ Create an object, this object takes one parameters which corressponds to the digital pins is connected to on the Arduino.
```cpp
Linefollower sensor(1,2,3,4,5,6,7,8,9,10,11,12);
```
connect the ir array sensor from digital pins from (1 to 8 pins ) as such 1 - 1,2 - 2 ..... 8-8. and four motor driver pins from 9 to 12 respectively
+ In *loop()* function, call the measure function
```cpp
sensor.line();
```
> This function returns the robot run in the desired black line .

## Contributors
    Vinodhini
    Ishthiaq Hussain
    
