int pinSalida = 13; //Declaramos variable.
int pinEntrada = 2; //Declaramos variable.

void setup() {
  pinMode(pinSalida, OUTPUT);// Definimos pin 13 como una salida.
  pinMode(pinEntrada, INPUT_PULLUP); //Definimos el pin 2 como entrada.

  void loop() {

    bool lectura = digitalRead(pinEntrada); //Hacemos la lectura y la guardamos en bool

    if (lectura == LOW) {               //Preguntamos si el botón fue presionado
      digitalWrite(pinSalida, HIGH);    // Encendomos la salida
      delay(1000);                      // Esperamos 1000 milisegundos(1 segundo)
      digitalWrite(pinSalida, LOW);     // Apagamos la salida
      delay(5);                         // Esperamos 500 milisegundos(1/2 segundo)
    }
  }
