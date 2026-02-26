void setup()
{
  pinMode(13, OUTPUT); //função de saída do pino 13
}

void loop()
{
  digitalWrite(13, HIGH); //acende o led
  delay(1000); // por 1 segundos
  digitalWrite(13, LOW); //apaga o led
  delay(1000); // por 1 segundos
}

