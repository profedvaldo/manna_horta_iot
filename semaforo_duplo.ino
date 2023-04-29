// C++ code
// criando uma variavel pra as portas
int verde = 10;
int amarelo = 9;
int vermelho = 8;

// C++ code
// criando uma variavel pra as portas duplas
int verde2 = 7;
int amarelo2 = 6;
int vermelho2 = 5;

void setup()
{
  //indicando as portas para o arduino;
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);

    pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);
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
  
  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, HIGH);
  
  //aguardar 5 segundos
  delay(5000);
  //vamos acionar o verde
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);

  digitalWrite(vermelho2, HIGH);
  digitalWrite(amarelo2, LOW);
  digitalWrite(verde2, LOW);
  
  //aguardar 3 segundos
  delay(3000);

    //vamos começar com o amarelo
  digitalWrite(vermelho2, LOW);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(verde2, LOW);
  
  //aguardar 2 segundos
  delay(2000);
  
  
}
