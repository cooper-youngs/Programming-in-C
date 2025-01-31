/*Given three input values representing counts of nickels, dimes, and quarters, 
output the total amount as dollars and cents.

Output each floating-point value with two digits after the decimal point using the following statement:
printf("Amount: $%0.2lf\n", dollars);

Ex: If the input is:

3 1 4

where 3 is the number of nickels (at $0.05 each), 1 is the number of dimes (at $0.10 each),
 and 4 is the number of quarters (at $0.25 each), the output is:

Amount: $1.25*/

#include <stdio.h>

int main() {

//need to initialize these as double so that they dont try to convert the calculations back to int when multiplying.
   double nickels;
   double dimes;
   double quarters;
   double dollars;

   scanf("%lf %lf %lf", &nickels, &dimes, &quarters);

   nickels *= 0.05;
   dimes *= 0.1;
   quarters *= 0.25;

   dollars = nickels + dimes + quarters; 

   printf("Amount: $%0.2lf\n", dollars);

   return 0;
}