/* we have learned  in Memory Address.c lab, that we can get MEMORY ADDRESS of a variable
with the reference operator &:
*/

#include <stdio.h>

int main(){

int myAge = 43; // an int variable

printf("%d\n", myAge);  // Outputs the value of myAge (43)
printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)

/* the &myAge is also known as a POINTER.
A POINTER is a variable that stores the memory address of another variable as its value
*/

int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

/* ABOVE EXAMPLE EXPLAINED
Create a pointer variable with  the name ptr, that points to an int variable (myAge).

Note that the type of the pointer has to match the type of the variable you are  working with.

Use the & operator to store the memory address of the myAge variable, and assign it to the pointer.
Now, ptr holds the value of myAge's memory address.
*/

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);

/* Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.

Why Should I Learn About Pointers?

Pointers are one of the things that make C stand out from other programming languages, like Python and Java.

This chapter was just a short introduction to Pointers. They are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance. However, pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

Good To Know: There are three ways to declare pointer variables, but the first way is mostly used:

int* myNum; // Most used
int *myNum;
int * myNum;

*/

return 0;
}
