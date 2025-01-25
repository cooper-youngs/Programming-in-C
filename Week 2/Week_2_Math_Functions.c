/*Common Math Functions 
sqrt(x)- square root of x
pow(x , y) - x to the power of y
fabs(x) - Absolute value of x
log(x) - natural log of x
log2(x) - log base 2 of x
log10(x) - see above
exp(x) - raise e to the power of x
ceil(x) - round up x
floor(x)- round x down
More - http://www.cplusplus.com/reference/cmath/
some functions in the <stdlib.h>
*/


/*Determine the distance between point (x1, y1) and point (x2, y2), 
and assign the result to pointsDistance. The calculation is:

Ex: For points (1.0, 2.0) and (1.0, 5.0), pointsDistance is 3.0.*/

#include <stdio.h>
#include <math.h>

int main(void) {
   double x1;
   double y1;
   double x2;
   double y2;
   double xDist;
   double yDist;
   double pointsDistance;

   xDist = 0.0;
   yDist = 0.0;
   pointsDistance = 0.0;

   scanf("%lf", &x1);
   scanf("%lf", &y1);
   scanf("%lf", &x2);
   scanf("%lf", &y2);

   pointsDistance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
   

   printf("%lf\n", pointsDistance);

   return 0;
}