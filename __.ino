/*#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

int trig = 2, echo = 3;
hd44780_I2Cexp lcd;
int a;
void setup () 
{
  lcd.begin(16,2);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  int a;
  
}

void loop()
{
  float duration, distance;
  digitalWrite(trig, HIGH);
  delay(400);
  digitalWrite(trig, LOW);
  durtion = pulseIn(echo,HIGH);
  distance = ((float)(duration * 340)/10000)/2;

  lcd.setCursor (0,0);
  lcd.print(distance);
  lcd.print("cm");
  lcd.setCursor (0,1);
  lcd.print("Distance from you");
  lcd.setCursor (0,0);
  lcd.print(distance);
}*/

/*
int echo3,trig=2;
void setup()
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  
}
void loop()
{

  digitalWrite(trig,LOW);
  digitalWrite(echo,LOW);
  delay(300);

  digitalWrite(trig,HIGH);
  delay(1000);
  digitalWrite(trig,LOW);

  unsigned long time= pulselN (echo, HIGH);
    float distance=((float)(340*time)/10000)/2;

    Serial.print(distance);
    Serial.println("cm");
}

*/

#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd;
void setup () 
{
  lcd.begin(16,2); //lcd 보드에 영역 정의?크기 배치
}

void loop()
{
  lcd.setCursor (0,0); //첫번째 입력 위치
  lcd.print("Hello"); //입력
  lcd.setCursor (0,1);//두번째 입력 위치 
  lcd.print("Fuck you");//입력
}
