int sensorGas = A0;
int cantGas;

void setup() {
  Serial.begin(9600);
  pinMode(sensorGas, INPUT);
}

void loop() {
  cantGas = analogRead(sensorGas);

  Serial.println(cantGas);
}
