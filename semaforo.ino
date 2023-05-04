// C++ code
// criando uma variavel pra as portas
int verde = 10;
int amarelo = 9;
int vermelho = 8;

void setup()
{
	//indicando as portas para o arduino;
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  //vamos começar com o amarelo
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  
  //aguardar 2 segundos
  delay(2000);
  //vamos acionar o vermelho
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  
  //aguardar 5 segundos
  delay(5000);
  //vamos acionar o verde
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);
  
  //aguardar 3 segundos
  delay(3000);
  
  
}
