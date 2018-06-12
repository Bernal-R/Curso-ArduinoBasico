void setup() {
  Serial.begin(9600); //Iniciamos el protocolo Serial, con una velocidad de transferencia de 9600 baudios
  pinMode(A0, INPUT); //Declaramos el pin A0 como una entrada
}

void loop() {
  int valor = analogRead(A0); //Leemos el valor en A0 y lo guardamos en valor
  Serial.println(valor); //Mostramos el valor en pantalla
}
