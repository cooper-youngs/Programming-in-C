//scanf and printf both use %lf to specify a double type instead
//of a %d that you would use for integer %lf stands for long-float

#include <stdio.h>

int main(void) {
   double milesTravel; // User input of miles to travel
   double hoursFly;    // Travel hours if flying those miles
   double hoursDrive;  // Travel hours if driving those miles
   
   printf("Enter miles to travel:\n");
   scanf("%lf", &milesTravel);
   
   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph
   
   printf("%lf miles would take:\n", milesTravel);
   printf("   %lf hours to fly\n", hoursFly);
   printf("   %lf hours to drive\n", hoursDrive);
   
   return 0;
}

/*It's generally not recommended to use floating-point variables for money
because money is countable, in the sense the dollars can be counted one
by one. then cents could be its own int counted one by one.*/