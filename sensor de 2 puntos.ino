int sensor = 2;
int valSensor;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  int valSensor = digitalRead(sensor);
  Serial.println(valSensor);
}
