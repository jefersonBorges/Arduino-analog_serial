// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensor = analogRead(A0);
  int valorSaida = map(sensor, 0, 1023, 0, 255);
  
  Serial.print("sensor = ");
  Serial.print(sensor);
  Serial.print("\tsaida = ");
  Serial.print(valorSaida);
  Serial.print("\n");
  delay(1000);
  
}