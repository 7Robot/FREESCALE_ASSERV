#include "extern_globals.h"
#include "motion.h"
#include "tools.h"

/*################################   VARIABLES   #################################*/

volatile MotionState motionState;
volatile MotionConstraint motionConstraint;


/*################################   FUNCTIONS   #################################*/

// se mettre en roue libre
void motion_free(){
}

// rouler à une certaine vitesse avec une certaine direction
void motion_speed_dir(float speed, float direction){
}

// rouler à une certaine vitesse en restant à une certaine position sur la piste
void motion_speed_pos(float speed, float pos){
}

// renvoie la commande de vitesse et de direction : à appeler dans l'interruption
void motion_step(int tics, float pos, float forecast_pos, float *cmd_speed, float *cmd_dir){
}
