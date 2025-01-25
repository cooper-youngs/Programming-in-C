/*when operands of / are integers, equation does not generate any 
fraction. The extra digits are just dropped off of the integer number.

For integer division, the second operand of / or % must never be 0, 
because division by 0 is mathematically undefined. A divide-by-zero 
error occurs at runtime if a divisor is 0,



Given a random number randNum, % can generate a random number within a 
range:

randNum % 10
Yields 0 - 9: Possible remainders are 0, 1, ..., 8, 9. Remainder 10 is 
not possible: Ex: 19 % 10 is 9, but 20 % 10 is 0.

randNum % 51
Yields 0 - 50: Note that % 50 would yield 0 - 49.

(randNum % 9) + 1
Yields 1 - 9: The % 9 yields 9 possible values 0 - 8, so the + 1 
yields 1 - 9.

(randNum % 11) + 20
Yields 20 - 30: The % 11 yields 11 possible values 0 - 10, so the + 20 
yields 20 - 30.



Given a number, % and / can be used to get each digit. For a 3-digit 
number userVal like 927:

onesDigit     = userVal % 10;    // Ex: 927 % 10 is 7. 
tmpVal        = userVal / 10;

tensDigit     = tmpVal % 10;Ex: tmpVal = 927 / 10 is 92. Then 92 % 10 is 2
tmpVal        = tmpVal / 10;

hundredsDigit = tmpVal % 10; Ex: tmpVal = 92 / 10 = 9. Then 9 % 10 is 9


tmpVal = phoneNum / 10000; // / 10000 shifts right by 4, so 136555. 
prefixNum = tmpVal % 1000; // % 1000 gets the right 3 digits, so 555.

Dividing by a power of 10 shifts a value right.
321 / 10 is 32. 
321 / 100 is 3. 
% by a power of 10 gets the rightmost digits. 
321 % 10 is 1. 
321 % 100 is 21.

What it really does
a % b = a - (a / b) * b
*/

//putting some of this in action
/*Convert totalDays to years, months, and days, finding the maximum number of years, then months, then days.

Ex: If the input is 2592, then the output is:

Years: 7
Months: 1
Days: 7*/

#include <stdio.h>

int main(void) {
   int totalDays;
   int numYears;
   int numMonths;
   int numDays;

   scanf("%d", &totalDays);

//Find max number of years by using integer division
   numYears = totalDays / 365;

 //Then by taking the modulo of totaldays we get the remainder days
 //Divide that by 30 to get number of months  
   numMonths = (totalDays % 365) / 30;

 //Use the same technique to find remainder days after taking the months
 //Just switch the int division to modulo which return remainder after ind
 //division  
   numDays = (totalDays % 365) % 30;

   printf("Years: %d\n", numYears);
   printf("Months: %d\n", numMonths);
   printf("Days: %d\n", numDays);

    return 0;
}