int a1=0;
int a2=0;
int a3=0;
int a4=0;
int a5=0;
int a6=0;
int a7=0;
int a8=0;
const int motor1=13;
const int motor2=12;
const int motor3=11;
const int motor4=10;
void setup() {
pinMode(8,INPUT);
pinMode(1,INPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);

pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(motor3,OUTPUT);
pinMode(motor4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  a1=digitalRead(1);
  a2=digitalRead(2);
  a3=digitalRead(3);
  a4=digitalRead(4);
  a5=digitalRead(5);
  a6=digitalRead(6);
  a7=digitalRead(7);
  a8=digitalRead(8);
  Serial.print(a5);
   if(a1==0||a2==0||a3==0||a4==0||a5==0||a6==0||a7==0||a8==0)
   {
    line();
   }
}
void line()
{
   if(a4==1||a5==1)
  {
                digitalWrite(motor1,HIGH);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,HIGH);
            digitalWrite(motor4,LOW);
            
    delay(1000); 
  }
  else if((a1==1||a2==1||a3==1)&&(a4==0||a5==0))
  {
            digitalWrite(motor1,LOW);
            digitalWrite(motor2,HIGH);
            digitalWrite(motor3,HIGH);
            digitalWrite(motor4,LOW);
            delay(100); 
    delay(1000); 
  }
  else if((a6==1||a7==1||a8==1)&&(a4==0||a5==0))
  {
            digitalWrite(motor1,HIGH);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,LOW);
            digitalWrite(motor4,HIGH);
             
    delay(1000); 
  }
  else
  {
      digitalWrite(motor1,LOW);
            digitalWrite(motor2,LOW);
            digitalWrite(motor3,LOW);
            digitalWrite(motor4,LOW);
  }
}  
