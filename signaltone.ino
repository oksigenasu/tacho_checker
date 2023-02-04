#define PIN D0
//replace pin with your digital pin

void setup()  {
  Serial.begin(115200);
  pinMode(PIN, OUTPUT);
}

void loop()  {
  Serial.println("sending 33hz");
  tone(PIN, 33.3333333333333);
  delay(2500);
  Serial.println("sending 66hz");
  tone(PIN, 66.66666666666667);
  delay(2500);
  Serial.println("sending 100hz");
  tone(PIN, 100);
  delay(2500);
  Serial.println("sending 133hz");
  tone(PIN, 133.3333333333333);
  delay(2500);
  Serial.println("sending 166hz");
  tone(PIN, 166.6666666666667);
  delay(2500);
  Serial.println("sending 200hz");
  tone(PIN, 200);
  delay(2500);
  Serial.println("sending 233hz");
  tone(PIN, 233.3333333333333);
  delay(2500);
  Serial.println("sending 266hz");
  tone(PIN, 266.6666666666667);
  delay(2500);
  Serial.println("sending notone");
  noTone(PIN);
  delay(2500);
}
