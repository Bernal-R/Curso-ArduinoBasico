int led = 3; //Definimos variable
int entrada = A0; //Definimos variable

void setup() {
  pinMode(led,OUTPUT);      //Declaramos como salida
  pinMode(entrada,INPUT);   //Declaramos como entrada
}

void loop() {
  int valor = analogRead(entrada); //Hacemos la lectura y la guardamos en valor
 
  int salida = map(valor,0, 1023, 0, 255); //Mapea los valor de entreada(entre 0 y 1024) a una salida(entre 0 y 255)
  
  analogWrite(led,salida); //Realizamos la salida analógica
}
