#ifndef MOTION_H
#define MOTION_H

/*################################   STRUCTURES   #################################*/

// état de la voiture (position sur piste, vitesse, direction)
typedef struct{
   float pos;     // position sur la ligne
   float d_pos;   // dérivée de pos
   float speed;   // vitesse de la voiture
   float acc;     // accélération de la voiture
   float dir;     // direction de la voiture
   float d_dir;   // dérivée de dir
} MotionState;

// contraintes de déplacement de la voiture (vitesses, accélérations)
typedef struct{
   float max_speed;  // vitesse maximale
   float max_acc;    // accélération maximale
   float max_dir;    // direction max
   float max_d_dir;  // changement de direction max
} MotionConstraint;

/*################################   FUNCTIONS   #################################*/

// se mettre en roue libre
void motion_free();

// rouler à une certaine vitesse avec une certaine direction
void motion_speed_dir(float speed, float direction);

// rouler à une certaine vitesse en restant à une certaine position sur la piste
void motion_speed_pos(float speed, float pos);

// renvoie la commande de vitesse et de direction : à appeler dans l'interruption
// forecast_pos correspond à la position estimée dans un certain temps en gardant les consignes actuelles
void motion_step(int tics, float pos, float forecast_pos, float *cmd_speed, float *cmd_dir);

#endif
