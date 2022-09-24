#define pinoSaida 3

int frequency = 800;
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
    //digitalWrite(pinoSaida, LOW);
    ligado ? (digitalWrite(pinoSaida, LOW), ligado = false, digitalWrite(4, LOW)) : (digitalWrite(pinoSaida, HIGH), ligado = true, digitalWrite(4, HIGH));
    //Serial.println(ligado);
    //delay(1000/frequency);
}