/*Write a program that allows the user to control the LED connected to pin 13 of the Arduino. 
When the program is started, the LED should be off. The user should open the serial monitor to communicate with the Arduino. 
If the user sends the character '1' through the serial monitor then the LED should turn on. If the user sends the character '0' 
through the serial monitor then the LED should turn off.
If you do not have an Arduino, you can use the web-based Arduino simulator at www.tinkercad.com. 
You will need to create an account for free. There are instructional videos on that website that will teach you how to use the simulator.*/

void setup() {
  Serial.begin(9600, SERIAL_8N1);
  pinMode(13, OUTPUT);
}

char cmd;
void loop() {
  while(Serial.available())
    cmd = Serial.read();
  if(cmd == '1')
    digitalWrite(13,HIGH);
  else if(cmd == '0')
    digitalWrite(13,LOW);
}
