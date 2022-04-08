// Objeto RTC
RTC_DS3231 rtc;

void setup()
{
    Serial.begin(9600);
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
    DateTime fecha = rtc.now(); // Obtenemos la hora actual y la almacenamos en un objeto llamado fecha
    Serial.println(fecha.hour()); // Imprimimos la fecha y hora actual
    Serial.println(fecha.minutes()); // Imprimimos la fecha y hora actual
    Serial.println(decha.seconds()); // Imprimimos la fecha y hora actual
    delay(1000); // Imprimimos
}
