/*
Some variables only need to store a small set of named values. 
For example, a variable representing a traffic light need only store values named GREEN, YELLOW, or RED.
 An enumeration type (enum) declares a name for a new type and possible values for that type.
 enum identifier {enumerator1, enumerator2,  ...};
 
 - The items within the braces ("enumerators") are integer constants automatically assigned an integer value, 
 with the first item being 0, the second 1, and so on. 

 enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE};
   enum LightState lightVal;
   lightVal = LS_RED;


Normally each value in an enum type is given an integer starting at 0, then 1, 2 etc.
Can also manually set integer values for each value, then access that value in a print statement
enum TvChannels {TC_CBS = 2, TC_NBC = 5, TC_ABC = 7};, what does printf("%d", TC_ABC);
- would print 7

*/