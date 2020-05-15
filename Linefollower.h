#ifndef Linefollower_h
#define Linefollower_h
#include "Arduino.h"
class Linefollower
{   
  public:
    Linefollower(int ir1,int ir2,int ir3,int ir4,int ir5,int ir6,int ir7,int ir8,int rmf,int rmb, int lmf,int lmb);
    void line();
    private:
      int sen1;
      int sen2;
      int sen3;
      int sen4;
      int sen5;
      int sen6;
      int sen7;
      int sen8;
      int motor1;
      int motor2;
      int motor3;
      int motor4;

  
};
#endif