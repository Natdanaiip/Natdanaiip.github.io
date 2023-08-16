#define D1 5 
#define button D1     // switch input Active Low
#define pressed LOW
void setup() 
{
  Serial.begin(9600);
  pinMode(button,INPUT_PULLUP);
}
void loop() 
{
  bool ReadSwitch = digitalRead(button);
  if(ReadSwitch == pressed)
  {
    Serial.println("1231451.");
    delay(500);
  }
}
