/*
when comparing floating-point numbers dont want to use ==; 
 - because floating point numbers may not be 100% accurate when saved in 64-bit memory
 
 example...
 numMeters = 0.7 -this will actually get saved as 0.6999999999999999555910790
 numMeters2 = 0.4 -this will actually get saved as 0.4000000000000000222044605
 
 
 should instead be compared for "close enough" i.e. if (x - y) < 0.0001
 but should also use absolute value since first expression may evaluate to negative
 so... if fabs(x - y) < 0.0001
 The difference factor (0.0001) is usually called epsilon
 -there are a few floating point numbers that will save with 100% accuracy because they can be completely represented in bits
 */

#include <stdio.h>
#include <math.h>

int main(void) {
   double targetValue;
   double sensorReadingNumerator;
   double sensorReadingDenominator;
   double sensorReading;

   scanf("%lf", &targetValue);
   scanf("%lf", &sensorReadingNumerator);
   scanf("%lf", &sensorReadingDenominator);

   sensorReading = sensorReadingNumerator / sensorReadingDenominator;

   if (fabs(sensorReading - targetValue) < 0.0001) {
      printf("Equal\n");
   }
   else {
      printf("Not equal\n");
   }

   return 0;
}