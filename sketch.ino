
void setup()
{
  pinMode(14, OUTPUT);  //Função  de saida de pino 13
}

void loop()
{
  digitalWrite(14, HIGH); //Ele acende o led 
  delay(1000);  //Por 2 segundos
  digitalWrite(14,LOW);  //Ele apaga o led 
  delay(1000);  //Por 2 segundos
}
