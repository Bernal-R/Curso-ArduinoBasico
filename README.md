# Curso Arduino Basico
Códigos de ejemplo básicos para Arduino, elaborados por Bernal Rojas.

### Documentación y Referencias:
* Arduino reference: https://www.arduino.cc/reference/en/

## Electrónica:
### Ley de ohm:
* Simulador: https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_es.html

### Señales 
* Señal Digital: Dos estados(0-1)
* Señal Analógica: Varia en el tiempo

### Circuitos Básicos para Arduino
* Sensores 
* Actuadores

## Software 
### Tipos de Variables
* int: Tipo entero. Ej: 2.
* float: Número con coma flotante. Ej: 3.14.
* bool: Puede ser Verdadero o Falso.
* char: Un caracter, usa 1 byte. Ej: 'A'
* String: Cadena de caracteres. Ej: "Hola mundo"
* *Más específicas:*
* byte: De 8 bits (1 Byte)
* short: De 16 bits (2 Bytes)
* long: De 32 bits (4 Bytes)
* array: Almacena varias variables. Ej: {4,5,6,7}

### Estructuras de Control
* Condicional If: 
```
 if(condition) {
   //statements
} else {
  //statements
}
```
* Switch Case: Para comparaciónes múltiples de una variable:
```
switch (var) {
  case label1:
    // statements
    break;
  case label2:
    // statements
    break;
  default:
    // statements
}
```
* While: Búcle condicionado:
```
while(condition){
  // statement(s)
}
```
* For: Bucle ligado a un contador:
```
for (initialization; condition; increment) {
	//statement(s);
}
```
## Arduino IDE
### Estructuras
* Set Up: Se ejecuta al inicio del código. Aquí inicilizamos todo lo que vamos a usar.
* Loop: Es un ciclo infinito. Nuestra función principal.

### Librerías
* Instalación de librerias (Ejercicio práctico)

### Alguna funciones de uso general
#### Digital I/O
* digitalRead() 
* digitalWrite() 
* pinMode() 

#### Analog I/O
* analogRead() 
* analogWrite() 
