/*
Each function call creates a new set of local variables, forming part of what is known as a stack frame.
A return causes those local variables to be discarded.

The compiler converts high-level code into assembly instructions (instrs) in memory.

Before executing the function, arguments are copied to parameter local variables and a return address 
is stored.

The function executes and stores the result in a designated return value location.

When the function completes, an instruction jumps back to the caller's location using the previously-stored
return address. Then, an instruction copies the function's return value to the appropriate variable.


*/