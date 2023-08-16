
void setup() 
{
 // pinMode(LED_BULITIN,OUTPUT); // setup output
  pinMode(5, OUTPUT);
  pinMode(16, OUTPUT);
}

void loop() 
{
  //digitalWrite(LED_BULITIN, LOW); // Pin D0 is HIGH
  digitalWrite(5, LOW);
  delay(1000);
  //digitalWrite(LED_BULITIN,LOW); // Pin D0 is LOW
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(16, LOW);
  delay(1000);
  //digitalWrite(LED_BULITIN,LOW); // Pin D0 is LOW
  digitalWrite(16, HIGH);
  delay(1000);
}
