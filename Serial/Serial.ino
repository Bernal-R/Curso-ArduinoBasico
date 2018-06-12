void setup() {
  Serial.begin(9600); //Iniciamos protocolo serial a una velocidad de 9600 baudios.
}

void loop() {
  Serial.println("Hola Mundo"); //Imprimimos en pantantalla
  delay(1000); //Esperamos 1000 milisegundos (1 segundo)
}
