const int trigPin = 9;
const int echoPin = 10;
long duracion;
int distancia;
void setup() 
{ 
  pinMode(trigPin, OUTPUT); // Pin que envía la onda
  pinMode(echoPin, INPUT); // Pin que recive la onda
  Serial.begin(9600);
}
void loop() 
{
  // Configuramos el enviador de ondas
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duracion = pulseIn(echoPin, HIGH); //Guardamos la duración que tarda la onda en ir y volver 
  //en una variable
  Serial.println(distancia); // IMprimimos los valores por consola
  delay(500);
} 
