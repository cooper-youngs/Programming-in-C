/*syntax for using an if branch with a conditional
if (bonusVal == 10) {
    numItems = numItems + 3;
    }
else {
    numItems = 11;
    }*/

   /*If userTickets is equal to 8, execute awardPoints = 1. Else, execute awardPoints = userTickets.*/

   #include <stdio.h>

   int main(void) {
    int awardPoints;
    int userTickets;

    scanf("%d", &userTickets);

    if (userTickets == 8) {
        awardPoints = 1;
    
    }
    else {
        awardPoints = userTickets;
    }

    printf("%d\n", awardPoints);

    return 0;


   }