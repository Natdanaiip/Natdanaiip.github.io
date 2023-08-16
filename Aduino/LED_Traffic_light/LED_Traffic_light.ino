#include "BluetoothSerial.h"

BluetoothSerial ESP_BT;

int incoming;

void setup() {

Serial.begin(9600);

ESP_BT.begin("ESP32_LED_Control");

Serial.println("Bluetooth Device is Ready to Pair");

pinMode (2, OUTPUT);

pinMode (1, OUTPUT);

pinMode (3, OUTPUT);


}

void loop() {

if (ESP_BT.available())
{
incoming = ESP_BT.read();

Serial.print("Received:"); Serial.println(incoming);

if (incoming == 49)
{
digitalWrite(1, HIGH);

ESP_BT.println("GREEN LED ON");
}

if (incoming == 48)
{
digitalWrite(1, LOW);

ESP_BT.println("GREEN LED OFF");
}

if (incoming == 51)
{
digitalWrite(2, HIGH);

ESP_BT.println("YELLOW LED ON");
}

if (incoming == 50)
{
digitalWrite(2, LOW);

ESP_BT.println("YELLOW LED OFF");
}

if (incoming == 53)
{
digitalWrite(3, HIGH);

ESP_BT.println("RED LED ON");
}

if (incoming == 52)
{
digitalWrite(3, LOW);

ESP_BT.println("RED LED OFF");
}

if (incoming == 55)
{
digitalWrite(1, HIGH);

digitalWrite(2, HIGH);

digitalWrite(3, HIGH);

ESP_BT.println("ALL LED ON");
}

if (incoming == 54)
{
digitalWrite(1, LOW);

digitalWrite(12, LOW);

digitalWrite(27, LOW);

ESP_BT.println("ALL LED OFF");
}
}
delay(20);

}
