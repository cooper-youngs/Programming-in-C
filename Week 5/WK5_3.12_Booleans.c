/*
Boolean refers to a quantity that has only two possible values, true or false. 
C programmers commonly use bool for representing Boolean quantities. C's actual Boolean 
data type is _Bool, but adding #include <stdbool.h> allows bool to be used instead.

defines false as 0 and true as 1

*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int userNum;
   bool isPositive;
   bool isEven;

   scanf("%d", &userNum);
   isPositive = (userNum > 0);
   isEven = ((userNum % 2) == 0);

    if (isEven && isPositive) {
    printf("Positive even number\n");
 }
    else if ((isEven == 0) && (isPositive)) {
    printf("Positive number\n");
 }
    else {
    printf("Not a positive number\n");
 }

   return 0;
}