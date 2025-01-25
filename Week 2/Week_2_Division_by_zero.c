/*Dividing a nonzero floating-point number by zero is undefined in
 regular arithmetic. Many programming languages produce an error when 
 performing floating-point division by 0, but C does not. C handles this 
 operation by producing infinity or -infinity, depending on the signs of 
 the operands. Printing a floating-point variable that holds infinity or 
 -infinity outputs inf or -inf.

If the dividend and divisor in floating-point division are both 0, 
the division results in a "not a number". Not a number (NaN) indicates
 an unrepresentable or undefined value. Printing a floating-point 
 variable that is not a number outputs nan.
 Try inputting 13 and 0 or 0 and 0*/

 #include <stdio.h>

int main(void) {
   double gasVolume;
   double oilVolume;
   double mixRatio;
   
   printf("Enter gas volume: ");
   scanf("%lf", &gasVolume);

   printf("Enter oil volume: ");
   scanf("%lf", &oilVolume);

   mixRatio = gasVolume / oilVolume;
   
   printf("Gas to oil mix ratio is %lf:1\n", mixRatio);
   
   return 0;
}