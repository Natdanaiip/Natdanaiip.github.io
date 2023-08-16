void setup() {

  pinMode(D2,OUTPUT); // เซตขา D2 เป็นขา OUTPUT

}

void loop() {

  digitalWrite(D2,HIGH); // ปล่อยลอจิกเป็น HIGH

  delay(100); // หน่วงเวลาทุกๆ 0.1 วินาที

  digitalWrite(D2,LOW); // ปล่อยลอจิกเป็น LOW

  delay(100); // หน่วงเวลาทุกๆ 0.1 วินาที

}
