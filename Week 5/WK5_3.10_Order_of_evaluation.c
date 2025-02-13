/*
ORDER OF OPERATIONS

() - parenthesis evald firsts
 ! - logical not evald next
 *, +, -, /, % - any arithmetic ops (within arithmetic follow arithmetic order of ops)
 < > <= >= - relational operators
 == != - equality and inequality operators
 && - logical AND
 || - logical OR
 */

 /*
 reason you cant write it like (16 < age < 25)
 
 say age is 32...
 this will evaluate left to right so 16 < age which returns TRUE
 then since it returned true it will evaluate TRUE < 25, since TRUE is treated as 1 this will return
 TRUE even though age in 32
 */

/*
Make sure to not use singular & or |
this will do bitwise operations and perform AND or OR on corresponding individual bits of operands
*/

