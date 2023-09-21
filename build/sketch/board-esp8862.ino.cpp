#include <Arduino.h>
#line 1 "C:\\Users\\Facundo\\Documents\\04 Repositorios\\IOT\\board-esp8862\\board-esp8862.ino"
int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

#line 5 "C:\\Users\\Facundo\\Documents\\04 Repositorios\\IOT\\board-esp8862\\board-esp8862.ino"
void setup();
#line 11 "C:\\Users\\Facundo\\Documents\\04 Repositorios\\IOT\\board-esp8862\\board-esp8862.ino"
void loop();
#line 5 "C:\\Users\\Facundo\\Documents\\04 Repositorios\\IOT\\board-esp8862\\board-esp8862.ino"
void setup()
{
    pinMode(PULSADOR, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    while (digitalRead(PULSADOR) == LOW)
    {
    }

    ESTADO = digitalRead(LED);
    digitalWrite(LED, !ESTADO);

    while (digitalRead(PULSADOR) == HIGH)
    {
    }
}

