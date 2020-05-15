#include "Arduino.h"
#include "Linefollower.h"

Linefollower::Linefollower(int ir1,int ir2,int ir3,int ir4,int ir5,int ir6,int ir7,int ir8,int rmf,int rmb, int lmf,int lmb)
{
    this->sen1=ir1;
    this->sen2=ir2;
    this->sen3=ir3;
    this->sen4=ir4;
    this->sen5=ir5;
    this->sen6=ir6;
    this->sen7=ir7;
    this->sen8=ir8; 
    this->motor1=rmf;
    this->motor2=rmb;
    this->motor3=lmf;
    this->motor4=lmb;
      pinMode(sen1,INPUT);
      pinMode(sen2,INPUT);
      pinMode(sen3,INPUT);
      pinMode(sen4,INPUT);
      pinMode(sen5,INPUT);
      pinMode(sen6,INPUT);
      pinMode(sen7,INPUT);
      pinMode(sen8,INPUT);
      pinMode(motor1,OUTPUT);
      pinMode(motor2,OUTPUT);
      pinMode(motor3,OUTPUT);
      pinMode(motor4,OUTPUT);
}

    void Linefollower::line()
{ 
    int i1 = digitalRead(this->sen1);
    int i2 = digitalRead(this->sen2);
    int i3 = digitalRead(this->sen3);
    int i4 = digitalRead(this->sen4);
    int i5 = digitalRead(this->sen5);
    int i6 = digitalRead(this->sen6);
    int i7 = digitalRead(this->sen7);
    int i8 = digitalRead(this->sen8);

  if(i4==1||i5==1)
  {
                digitalWrite(this->motor1,HIGH);
            digitalWrite(this->motor2,LOW);
            digitalWrite(this->motor3,HIGH);
            digitalWrite(this->motor4,LOW);
            
    delay(1000); 
  }
  else if((i1==1||i2==1||i3==1)&&(i4==0||i5==0))
  {
            digitalWrite(this->motor1,LOW);
            digitalWrite(this->motor2,HIGH);
            digitalWrite(this->motor3,HIGH);
            digitalWrite(this->motor4,LOW);
            delay(100); 
    delay(1000); 
  }
  else if((i6==1||i7==1||i8==1)&&(i4==0||i5==0))
  {
            digitalWrite(this->motor1,HIGH);
            digitalWrite(this->motor2,LOW);
            digitalWrite(this->motor3,LOW);
            digitalWrite(this->motor4,HIGH);
            
	
    delay(1000); 
  }
  else
  {
      digitalWrite(this->motor1,LOW);
            digitalWrite(this->motor2,LOW);
            digitalWrite(this->motor3,LOW);
            digitalWrite(this->motor4,LOW);
  }
}  

