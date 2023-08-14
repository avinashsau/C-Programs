/* When a variable is created in C, a memory address is assigned to the variable.
the memory address is the location of where the variable is stored in the computer.
when we assign a value to the variable, it is stored in this memory address.

*/
#include <stdio.h>

int main(){

int myAge = 43;
printf("%p\n", &myAge); // Outputs 000000000061FE1C

return 0;
}
