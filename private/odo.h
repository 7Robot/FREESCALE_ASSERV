#ifndef ODO_H
#define ODO_H

/*################################   STRUCTURES   #################################*/

// odo servant à mettre à jour l'état de la voiture
typedef struct{
   int tic_by_meter;    // nombre de tics par mètre
   float meter_by_tic;  // distance (en m) correspondant à un tic
   int tics;            // nombre de tics depuis le début
   int freq;            // fréquence (en Hz) à laquelle on évalue l'odométrie (100Hz)
} Odo;

/*################################   FUNCTIONS   #################################*/

// maj de l'état de la voiture
void odo_step(int tics, float pos);

#endif
