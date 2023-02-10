// C++ code
//Tarefa 4

const int blueLed = 2;
const int greenLed = 3;
const int yellowLed = 4;
const int redLed = 5;
const int roomTemp = A0;
const int waterTemp = A1;
const char celsius[] = " Celsius";

int room;
int roomSensor;
int water;
int waterSensor;

void setup()
{
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
  
{
  roomSensor = analogRead(roomTemp);
  room = map(((roomSensor - 20) *3.04), 0, 1023, (-20), 50);
  
  waterSensor = analogRead(waterTemp);
  water = map(((waterSensor - 20) * 3.04), 0, 1023, 15, 100);
  
  //Aciona o led azul entre 15 e 65°C
  if(water >= 15 && water <= 65){
    digitalWrite(blueLed, HIGH);
  }else{ digitalWrite(blueLed, LOW);}
  
  //Aciona o led verde entre 65 e 80°C
  if(water > 65 && water <= 80){
    digitalWrite(greenLed, HIGH);
  }else{ digitalWrite(greenLed, LOW);}
  
  //Aciona o led amarelo entre 80 e 85°C
  if(water > 80 && water <= 85){
    digitalWrite(yellowLed, HIGH);
  }else{ digitalWrite(yellowLed, LOW);}
  
  //Aciona o led vermelho entre 15 e 65°C
  if(water > 85 && water <= 100){
    digitalWrite(redLed, HIGH);
  }else{ digitalWrite(redLed, LOW);}
  
  
  Serial.print("\n");
  Serial.print("Room Temperature = ");
  Serial.print(room);
  Serial.print(celsius);
  
  Serial.print("\tWater Temperature = ");
  Serial.print(water);
  Serial.print(celsius);
  Serial.print("\n");
  delay(1000);
  
}