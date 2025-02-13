/*
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, 
and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, 
and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, 
and I-290 services I-90. Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

Given a highway number, indicate whether it is a primary or auxiliary highway. 
If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south 
or east/west.
*/

#include <stdio.h>

int main(void) {
   int highwayNumber;
   int lastTwoDigits;
   int tensPlace;
   
   scanf("%d", &highwayNumber);
   lastTwoDigits = highwayNumber % 100;
   tensPlace = (highwayNumber / 10) % 10; //dividing by 10 to remove ones place, then modulo 10 to take away hundreds place
//if we wanted the ones place we could just do modulo 10 on any number


if (highwayNumber > 999) {
    printf("%d is not a valid interstate highway number.\n");
}
else {
//printf("%d", tensPlace);
   if ((highwayNumber == 0) || (highwayNumber == 200) || (highwayNumber == 300)) {
       printf("%d is not a valid interstate highway number.\n", highwayNumber);
   } 
   else if (highwayNumber < 100) {
       if (highwayNumber % 2 == 0) {
           printf("I-%d is primary, going east/west.\n", highwayNumber);
       } else {
           printf("I-%d is primary, going north/south.\n", highwayNumber);
       }
   } 
   else {
       if (highwayNumber % 2 == 0) {
           printf("I-%d is auxiliary, serving I-%d, going east/west.\n", highwayNumber, lastTwoDigits);
       } else {
           printf("I-%d is auxiliary, serving I-%d, going north/south.\n", highwayNumber, lastTwoDigits);
       }
   }
}
   return 0;
}