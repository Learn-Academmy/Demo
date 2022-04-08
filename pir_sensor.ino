void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {
  int estPir = digitalRead(2);
 Serial.println(estPir); 
  delay(500);
}
