/*
Numerous engineering and scientific applications require finding solutions to a set of equations. 
Ex: 8x + 7y = 38 and 3x - 5y = -1 have a solution x = 3, y = 2. 
Given integer coefficients (a, b, c, d, e, and f) of two linear equations with variables x and y listed below,
use brute force to find an integer solution for x and y in the range -10 to 10.

ax + by = c

dx + ey = f

Ex: If the input is:

8 7 38
3 -5 -1
the output is:

x = 3, y = 2
*/
#include <stdio.h>

int main(void) {

   int a;
   int b;
   int c;
   int d;
   int e;
   int f;
   int x;
   int y;
   int currentResultOne;
   int currentResultTwo;
   int solFound;

   scanf("%d %d %d", &a, &b, &c);
   scanf("%d %d %d", &d, &e, &f);

   for (x = -10; x <= 10; ++x) {
    for (y = -10; y <= 10; ++y) {
        currentResultOne = (a * x) + (b * y);
        currentResultTwo = (d * x) + (e * y);
        if ((currentResultOne == c) && (currentResultTwo == f)){
            printf("x = %d, y = %d\n", x, y);
            solFound = 1;
            break;
        }
    }
   }
   if (solFound != 1) {
    printf("There is no solution\n");
   }

   return 0;
}
