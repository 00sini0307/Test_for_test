#include "DHT.h" 
#define DHTPIN 2     

#define DHTTYPE DHT11   

DHT dht(DHTPIN, DHTTYPE);
int A = 8;
int B = 9;
 

void setup() {
  Serial.begin(9600); 
  Serial.println("temp, Humi"); 
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT); 
  dht.begin(); 
}

void loop() {
  
  delay(2000); 

  
  float temp = dht.readTemperature(); 
  float humi = dht.readHumidity(); 

  
  Serial.print("Temp: ");
  Serial.print(temp); // 
  Serial.println("*C");
  
  Serial.print("Humi: ");
  Serial.println(humi); 
  Serial.println("------");
  if(temp<25)
  {
    digitalWrite(A,LOW); 
    digitalWrite(B,HIGH);
  }
  else 
  {
    digitalWrite(A,HIGH); 
    digitalWrite(B,HIGH);
  }
}
