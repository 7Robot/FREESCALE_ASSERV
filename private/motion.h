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

// rouler à une certaine vitesse avec une certaine direction
void motion_speed(float speed, float direction);

#endif
