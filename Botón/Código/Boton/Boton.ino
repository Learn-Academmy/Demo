//Los botones son compoentes digitales.
//Para controlar un componente son un botón es necesario crear una variable del componente y otra que contendrá el valor del mismo.
//Para controlar los compoentes lo ideal es utilizar condicionales como if, else o sitch case.

int boton = 13; //Variable con el número de pin

int valorBoton; //Variable que contendrá el estado del botón

void setup() {
  Serial.begin(9600);
  pinMode(boton, INPUT); //Definimos el pin
}

void loop() {
  valorBoton = digitalRead(boton); //Almacenamos el valor del botón en una variable
  Serial.println(valorBoton);
}
