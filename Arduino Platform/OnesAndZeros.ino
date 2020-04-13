void setup() {
  Serial.begin(9600, SERIAL_8N1);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW); //just to be safe
}

void loop() {
 if(Serial.available()!= 0) {
    if(Serial.read() == 1) {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }
    else if(Serial.read() == 0) {
      digitalWrite(13, LOW);
      Serial.println("LED OFF"); }
    else
      Serial.println("No data is available.");
  }
}
