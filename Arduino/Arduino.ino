int led1 = 13;
int led2 = 10;
int led3 = 9;

void setup()   {

  // Serial
  Serial.begin(9600);

  // Leds
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop()
{
char caracter = Serial.read();

  if(caracter == 'a')
  {
    if(digitalRead(led1) == HIGH){
      digitalWrite(led1, LOW);
      Serial.println("Led 1: DESLIGADO");
    }else  {
      digitalWrite(led1, HIGH);
      Serial.println("Led 1: LIGADO");
    }    
  }  
  else if(caracter == 'b')
  {
    if(digitalRead(led2) == HIGH){
      digitalWrite(led2, LOW);
      Serial.println("Led 2: DESLIGADO");
    }else  {
      digitalWrite(led2, HIGH);
      Serial.println("Led 2: LIGADO");
    }
  } else if(caracter == 'c')
  {
    if(digitalRead(led3) == HIGH){
      digitalWrite(led3, LOW);
      Serial.println("LED 3: DESLIGADO");
    }else  {
      digitalWrite(led3, HIGH);
      Serial.println("LED 3: LIGADO");
    }
   }
}
