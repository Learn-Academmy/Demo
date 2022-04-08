/*Despertador

Funcionamiento:
boton1 = setea hora = contador del boton1
boton2 = setea minutos = contador del boton2
boton3 = setea segundos = contador del boton3

horario de alarma = seteo de horas, minutos y segundos

if horas && minutos && segundos == horario actual{
    encender buzzer
}*/

// Inclución de librerías para el módulo de reloj y la pantalla LCD
#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal.h>  

// Declaramos los pines a los que estará conectada nuestra pantalla
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

// Objeto RTC
RTC_DS3231 rtc;

// Varaibles de botones y buzzer
int setHourButton = 13;
int setMinutesButton = 12;
int setSecondsButton = 11;
int buzzer = 10;

// Varaibles de contadores de botones, 1, 2 y 3
int contador_setHourButton = 0;
int contador_setMinutesButton = 0;
int contador_setSecondsButton = 0;

// Botones de encendido y apagado
int off = 9;
int on = 8;

void setup()
{
    Serial.begin(9600);

    // Definimos el tamaño de la pantalla LCD
    lcd.begin(16,2);

    // Declaramos el los compoenentes de hardware conectados
    pinMode(setHourButton, INPUT);
    pinMode(setMinutesButton, INPUT);
    pinMode(setSecondsButton, INPUT);
    pinMode(buzzer, OUTPUT);

    // Configuraciones iniciales del módulo RTC
    if (!rtc.begin())
    {
        Serial.println("Módulo RTC no encontrado !");
        while (1)
        {
            // Asignamos fecha de partida
            rtc.adjust(DateTime(__DATE__, __TIME__));
        }
    }
}

void loop()
{
    DateTime fecha = rtc.now();
    Serial.println(fecha);
    delay(1000);
}
