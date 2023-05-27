int analogPin = A0;
int led = 6;
                    
int val = 0;        

void setup() {
  Serial.begin(9600);  
  pinMode(led, OUTPUT);
}

void loop() {
  val = analogRead(analogPin);  
  Serial.println(val);  
  if (val > 900) {
    
   digitalWrite(led, HIGH); 
  }else{
    digitalWrite(led, LOW); 
  }
}
