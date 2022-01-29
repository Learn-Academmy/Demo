//Sensor de temperatura: es un componente analógico, y se lo puede usar de igual manera que el potenciómetro.
//1° --> Se debe crea una variable del componente y una para almacenar el valor que este tendrá. 
//2° --> Con el comando: variable que contendrá el valor = analogRead(pin del componente); guardaremos el valor del sensor en una variable.

int sensor = ; //Variable con el número de pin

int valorSensor; //Variable que contendrá el valor del sensor

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT); //Definimos el pin
}

void loop() {
  valorSensor = analogRead(sensor); //Almacenamos el valor del sensor en una variable.
  Serial.println(valorSensor);
}
