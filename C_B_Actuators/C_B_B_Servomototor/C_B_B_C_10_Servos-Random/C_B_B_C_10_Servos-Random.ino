#include <Servo.h>

const int nombreDeServos = 10;

// Création d'une liste d'objets Servo de la longueur du nombre de servos
Servo ListeServos[nombreDeServos];

//création variable moteurAuHasard de type int (nombre entier)
int moteurAuHasard;

void setup() {
  // Assignations des pins de l'arduino aux différents servo moteurs
  for (int i = 0; i < nombreDeServos; i++) {
    ListeServos[i].attach(i + 2);
  }
}

void loop() {
  //---------------------------------- Moteur en marche au hasard
  //un nombre entier au hasard entre 0 et 9 (inclus) que l'on stocke dans la variable moteurAuHasard
  moteurAuHasard = int(random(0, nombreDeServos+1));

  for (int i = 0; i < nombreDeServos; i++) {
    if (i == moteurAuHasard) { // si l'index de la liste des servos correspond au nombre au hasard…
      ListeServos[i].write(180); //... je fais tourner le moteur correspondant ***
    } else {
      ListeServos[i].write(90); //... sinon les autres moteurs ne bougent pas
    }
  }
  //Durée de la rotation en millisecondes : 1000 ms -> 1 seconde pour le moteur qui tourne, durée de la pause pour les autres
  delay(2000); // rotation 10 secondes ***

  //---------------------------------- Moteurs en pause
  for (int i = 0; i < nombreDeServos; i++) {
  ListeServos[i].write(90);
  }
  //Durée de la pause en millisecondes : 1000 ms -> 1 seconde
  delay(5000); // pause 5 secondes ***
}
