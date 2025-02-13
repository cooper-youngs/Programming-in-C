/*Write a program whose inputs are three integers, and whose output is the smallest of the three values.*/

#include <stdio.h>

int main(void) {

   int num1;
   int num2;
   int num3;

   scanf("%d", &num1);
   scanf("%d", &num2);
   scanf("%d", &num3);

   if ((num1 <= num2) && (num1 <= num3)) {
    printf("%d\n", num1);
   }
   else if ((num2 <= num1) && (num2 <= num3)) {
    printf("%d\n", num2);
   }
   else {
    printf("%d\n", num3);
   }

   return 0;
}