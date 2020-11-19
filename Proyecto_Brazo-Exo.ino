#include <Servo.h>

Servo servo1,servo2; //Inicio de variables para el servomotor

int potenciometro= 0; //les para los potenciometros
int valor = 0; //Inicio de variables con respecto al movimiento

void setup()
{
  servo1.attach(11); //Se identifican los servomotores por medio de attach y el numero del input localizado
  servo2.attach(10);
  Serial.begin(9600);
}

void loop()
{
    
  valor = analogRead(potenciometro); //Se le da el valor del potenciometro indicado para leer el movimiento
  Serial.println(valor);
  valor = map(valor,0,1023,0,180); //Se le da el mapeo de movimiento
  servo1.write(valor); 
  servo2.write(valor);
  delay(10); //Se le aplica un "retraso" a la reacción del movimiento
}
