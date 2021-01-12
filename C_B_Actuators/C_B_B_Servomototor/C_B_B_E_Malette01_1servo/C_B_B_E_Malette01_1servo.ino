/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // créer un objet servo pour contrôler un servo moteur
// douze objets servo peuvent être créés sur la plupart des carte Arduino

int pos = 0;    // variable pour mémoriser la position du moteur

void setup() {
  myservo.attach(3);  // fixe le servo sur la broche 3 à l'objet servo
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // va de 0 degrés à 180 degrés
    // in steps of 1 degree
    myservo.write(pos);              // dire au servo d'aller en position dans la variable "pos"
    delay(15);                       // attend 15 ms que le servo atteigne la position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // passe de 180 degrés à 0 degré
    myservo.write(pos);              // dire au servo d'aller en position dans la variable "pos"
    delay(15);                       // attend 15 ms que le servo atteigne la position
  }
}
