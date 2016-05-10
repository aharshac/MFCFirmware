#include "MFC.h"

//===========================================================================
//================================ MFC ======================================
//===========================================================================
/*/
0 -	3DP
1 -	Laser
2 - Mill
*/
int tool_mode = TOOL_MODE_3DP;

void toolSetup(){
	pinMode(PIN_LASER_PWM, OUTPUT);
	pinMode(PIN_MILL_PWM, OUTPUT);
	pinMode(PIN_MILL_DIR1, OUTPUT);
	pinMode(PIN_MILL_DIR2, OUTPUT);
}

void toolOff(){
	digitalWrite(PIN_LASER_PWM, LOW);
	digitalWrite(PIN_MILL_PWM, LOW);
	digitalWrite(PIN_MILL_DIR1, LOW);
	digitalWrite(PIN_MILL_DIR2, LOW);
}

bool is_mode_sensitive_3DP_code(int code){
	if(tool_mode != TOOL_MODE_3DP){
		int sensitive_3DP_M[] = SENSITIVE_3DP_M;
		for (uint8_t i = 0; i < COUNT(sensitive_3DP_M); i++) {
			if (sensitive_3DP_M[i] == code) {
				return true;
			}
		}
	}
	return false;
}
