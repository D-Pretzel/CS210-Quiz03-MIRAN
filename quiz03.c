/** quiz03.c
* ===========================================================
*    Name: David Petzold
* Section: T6/7
* Purpose: Quiz 3
* ===========================================================
*/

#include <stdio.h>
#include <string.h>
#include "quiz03functs.h"

int main(void) {

    int riskValue = 0;
    int riskLevel = RISK_LEVEL_LOW;
    int numCrewMembers = 0;
    char rlev[99];

    // user input
    printf("enter risk-value: ");
    scanf("%i", &riskValue);

    printf("enter number of crewmembers: ");
    scanf("%i", &numCrewMembers);

    // get risk level
    riskLevel = getRiskLevel(riskValue, numCrewMembers);

    if (riskLevel == 0){
        strcpy(rlev, "Low Risk");
    } else if (riskLevel == 1){
        strcpy(rlev, "Moderate Risk");
    } else if (riskLevel == 2){
        strcpy(rlev, "High Risk");
    }
    // output Risk Level
    printf("risk level: %s\n", rlev);
}
