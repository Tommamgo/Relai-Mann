
uint8_t re_0 = 12; 
uint8_t re_1 = 11;
uint8_t re_2 = 10;
uint8_t re_3 = 9;

long rand0 = 0;
long rand1 = 0;
long rand2 = 0;
long rand3 = 0;

unsigned long previousMillis_0 = 0;
unsigned long previousMillis_1 = 0;
unsigned long previousMillis_2 = 0;
unsigned long previousMillis_3 = 0;
 


void setup()

{

  rand0 = random(0, 59)* 1000;
  rand1 = random(0, 59)* 1000;
  rand2 = random(0, 59)* 1000; 
  rand3 = random(0, 59)* 1000;

  pinMode(re_0, OUTPUT);
  pinMode(re_1, OUTPUT);
  pinMode(re_2, OUTPUT);
  pinMode(re_3, OUTPUT);

}

// Code 

void loop()

{
  unsigned long  currentMillis = millis();
  if (currentMillis - previousMillis_0 >= rand0){
    digitalWrite(re_0, HIGH);
    if (currentMillis - previousMillis_0 >= rand0 + 1000){
      digitalWrite(re_0, LOW);
      previousMillis_0 = currentMillis; 
    }
  }
  if (currentMillis - previousMillis_1 >= rand1){
    digitalWrite(re_1, HIGH);
    if (currentMillis - previousMillis_1 >= rand1 + 1000){
      digitalWrite(re_1, LOW);
      previousMillis_1 = currentMillis; 
    }
  }
  if (currentMillis - previousMillis_2 >= rand2){
    digitalWrite(re_2, HIGH);
    if (currentMillis - previousMillis_2 >= rand2 + 1000){
      digitalWrite(re_2, LOW);
      previousMillis_2 = currentMillis; 
    }
  }
  if (currentMillis - previousMillis_3 >= rand3){
    digitalWrite(re_3, HIGH);
    if (currentMillis - previousMillis_3 >= rand3 + 1000){
      digitalWrite(re_3, LOW);
      previousMillis_3 = currentMillis; 
    }
  }


}
