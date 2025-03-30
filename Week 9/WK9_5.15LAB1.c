/*
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. 
This can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by dividing all values by the largest value. 
The input begins with an integer indicating the number of floating-point values that follow. Assume that the list will always contain less than 20 positive floating-point values.

For coding simplicity, follow every output value by a space, including the last one. 
And, output each floating-point value with two digits after the decimal point, which can be achieved as follows:

printf("%0.2lf ", yourValue);

Ex: If the input is:

5
30.0 50.0 10.0 100.0 65.0
the output is:

0.30 0.50 0.10 1.00 0.65 
*/

#include <stdio.h>

int main(void) {

   int numEntries;
   float numbers[20];
   float maxNum;
   int i;


   //printf("Please enter the number of entries that will follow: "); 
   scanf("%d", &numEntries);

   for (i = 0; i < numEntries; ++i) {
    scanf("%f", &numbers[i]);
   }

   maxNum = numbers[0];

   for (i = 0; i < numEntries; ++i) {
    if (numbers[i] > maxNum) {
        maxNum = numbers[i];
    }
   }

   for (i = 0; i < numEntries; ++i) {
    printf("%0.2lf ", numbers[i] / maxNum);
   }

   printf("\n");


   return 0;
}