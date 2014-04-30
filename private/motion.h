#ifndef MOTION_H
#define MOTION_H

/*################################   STRUCTURES   #################################*/

// état de la voiture (position sur piste, vitesse, direction)
typedef struct{
   float pos;
   float speed;
   float dir;
} MotionState;

/*################################   FUNCTIONS   #################################*/

// se mettre en roue libre
void motion_free();

// rouler à une certaine vitesse avec une certaine direction
void motion_speed_dir(float speed, float direction);

// rouler à une certaine vitesse en restant à une certaine position sur la piste
void motion_speed_pos(float speed, float pos);

#endif
