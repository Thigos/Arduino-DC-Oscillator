#define pinoSaida 3

int frequency = 800; //Max 980 Hz
int ligado = true;

void setup()
{
    pinMode(pinoSaida, OUTPUT);
    Serial.begin(9600);
    Serial.println("=========================");
    Serial.println("Iniciando");
    Serial.println("=========================");

    delay(5000);
}

void loop()
{
    ligado ? (digitalWrite(pinoSaida, LOW), ligado = false, digitalWrite(4, LOW)) : (digitalWrite(pinoSaida, HIGH), ligado = true, digitalWrite(4, HIGH));
    delay(1000/frequency);
}
