/** quiz03functs.c
* ===========================================================
*    Name: David Petzold
* Section: T 6/7
* Purpose: Quiz 3
* ===========================================================
*/

#include "quiz03functs.h"

int getRiskLevel(int riskPoints, int numCrewMembers){

    if (numCrewMembers == 1){
        if (riskPoints >= 0 && riskPoints <= 8){
            return RISK_LEVEL_LOW;
        } else if (riskPoints >= 9 && riskPoints <= 16){
            return RISK_LEVEL_MID;
        } else if (riskPoints >= 17 && riskPoints <= 35){
            return RISK_LEVEL_HIGH;
        }
    } else {
        if (riskPoints >= 0 && riskPoints <= 10){
            return RISK_LEVEL_LOW;
        } else if (riskPoints >= 11 && riskPoints <= 20){
            return RISK_LEVEL_MID;
        } else if (riskPoints >= 21 && riskPoints <= 35){
            return RISK_LEVEL_HIGH;
        }
    }
    return RISK_LEVEL_LOW;
}