int sensorPin = A0; // define o pino analógico que o sensor está conectado
int sensorValue = 0; // variável para armazenar o valor lido do sensor

void setup() {
  Serial.begin(9600); // inicializa a comunicação serial
}

void loop() {
  // lê o valor do sensor
  sensorValue = analogRead(sensorPin);

  // imprime o valor lido na porta serial
  Serial.print("Valor do Sensor: ");
  Serial.println(sensorValue);

  // espera por um curto período de tempo antes de ler novamente
  delay(10);
}