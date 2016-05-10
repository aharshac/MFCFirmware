/**
 * MFC.h
 */
 
#ifndef MFC_H
#define MFC_H

#include <Arduino.h>
#include "Marlin.h"

#define MFC_TITLE "MFC"

#define TOOL_MODE_3DP 0
#define TOOL_MODE_LASER 1
#define TOOL_MODE_MILL 2

#define SENSITIVE_3DP_M { 104, 109, \
    140, 145, 190, 600	\
}

#define SENSITIVE_3DP_G { 10, 11}


#define MSG_ERR_WRONG_MODE    "Wrong mode for operation"
#define MSG_ERR_NO_SPEED      "S parameter not found"
#define MSG_ERR_WRONG_SPEED   "S parameter not between 0 to 255"

#define MSG_3DP   "3D Printer Mode"
#define MSG_LASER   "Laser Cutter Mode"
#define MSG_MILL  "PCB Mill Mode"


//===========================================================================
//================================ MFC ======================================
//===========================================================================
/*/
0 -	3DP
1 -	Laser
2 - Mill
*/
extern int tool_mode;

void toolSetup();
void toolOff();
bool is_mode_sensitive_3DP_code(int code);

#endif // MFC_H
