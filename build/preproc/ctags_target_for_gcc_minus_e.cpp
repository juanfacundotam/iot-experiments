# 1 "C:\\Users\\Facundo\\Documents\\04 Repositorios\\IOT\\board-esp8862\\board-esp8862.ino"
int PULSADOR = 2;
int LED = 3;
int ESTADO = 0x0;

void setup()
{
    pinMode(PULSADOR, 0x0);
    pinMode(LED, 0x1);
}

void loop()
{
    while (digitalRead(PULSADOR) == 0x0)
    {
    }

    ESTADO = digitalRead(LED);
    digitalWrite(LED, !ESTADO);

    while (digitalRead(PULSADOR) == 0x1)
    {
    }
}
