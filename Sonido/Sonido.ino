#include "Notas.h" //Importamos archivo

void setup() {
  pinMode(3,OUTPUT); //Declaramos pin 3 como salida
}

void loop() {
  tone(8, NOTE_E1, 250);  //Tocamos en el pin 8, la nota especificada, con duración 250ms
  delay(250);             //Esperamos 250ms
}
