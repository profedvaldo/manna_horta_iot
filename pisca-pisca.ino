// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  //aqui estamos "setando" o pino 11 saída

  pinMode(10, OUTPUT);
  //aqui estamos "setando" o pino 11 saída

}

void loop()
{
  digitalWrite(11, HIGH);
  //aqui estamos dizendo que o pino 11 
  //esta ligado;
  
  delay(500);
  /// tempo  de intervalo entre um comando
  
  digitalWrite(11, LOW);
  // aqui estamos dizendo que o pino 11
  //esta desligado;
  
  delay(500);
  
    digitalWrite(10, HIGH);
  //aqui estamos dizendo que o pino 11 
  //esta ligado;
  
  delay(500);
  /// tempo  de intervalo entre um comando
  
  digitalWrite(10, LOW);
  // aqui estamos dizendo que o pino 11
  //esta desligado;
  
  delay(500);
  
  
}
