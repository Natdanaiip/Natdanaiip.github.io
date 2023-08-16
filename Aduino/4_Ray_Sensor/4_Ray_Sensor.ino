

int sensorPin1 = 7;
int sensorPin2 = 6;
int sensorPin3 = 5;
int sensorPin4 = 4;
 
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
 
void setup() {

 pinMode(INPUT,sensorPin1);
 pinMode(INPUT,sensorPin2);
 pinMode(INPUT,sensorPin3);
 pinMode(INPUT,sensorPin4);
 Serial.begin(115200);

}
 
void loop() {

 sensorValue1 = digitalRead(sensorPin1); 
 sensorValue2 = digitalRead(sensorPin2); 
 sensorValue3 = digitalRead(sensorPin3); 
 sensorValue4 = digitalRead(sensorPin4); 

 Serial.print("Val1 ");
 Serial.println(sensorValue1);  
 Serial.print("Val2 ");
 Serial.println(sensorValue2);  
 Serial.print("Val3 ");
 Serial.println(sensorValue3);  
 Serial.print("Val4 ");
 Serial.println(sensorValue4);  
 delay(500);

}
