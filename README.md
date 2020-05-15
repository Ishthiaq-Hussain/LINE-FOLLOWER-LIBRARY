# Linefollower Arduino library

> This library for Arduino for you to make a line follower robot  with simple code.



## Ciruit Diagram
+ ![Wiring](https://github.com/Manghao/LM35/tree/master/schema/schema.png)

## Installation
[Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Usage
+ Include library file header
```cpp
#include <LM35.h>
```

+ Create an object, this object takes one parameter which corressponds to the analgo pin is connected to on the Arduino.
```cpp
LM35 lm35(0);
```

+ In *loop()* function, call the measure function
```cpp
lm35.getTemp();
// or
lm35.getTemp(CELCIUS);
```
> This function returns the temperature in celsius

If you want the temperature in Fahrenheit or Kelvin, you can add a parameter to the function.
+ Temperature in Fahrenheit
```cpp
lm35.getTemp(FAHRENHEIT);
```

+ Temperature in Kelvin
```cpp
lm35.getTemp(KELVIN);
```
