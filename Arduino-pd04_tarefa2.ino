// C++ code
//

int sensor;
int valorSaida;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor = analogRead(A0);
  valorSaida = map(sensor, 0, 1023, (-20), 50);
  
  Serial.print("Sensor = ");
  Serial.print(sensor);
  Serial.print("\tTemperatura = ");
  Serial.print(valorSaida);
  Serial.print("\n");
  delay(1000);
  
}