#ifndef LIB_ASSERV_H
#define LIB_ASSERV_H

/*######################################   FUNCTIONS   #######################################*/

// se mettre en roue libre
void motion_free();

// rouler à une certaine vitesse avec une certaine direction
void motion_speed_dir(float speed, float direction);

// rouler à une certaine vitesse en restant à une certaine position sur la piste
void motion_speed_pos(float speed, float pos);

#endif
