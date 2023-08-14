/*
The Structures (Also called Structs) are a way to group several related varibles into one place. each variable in the structure is known as a member of the structure.
unlike an array, a structure can contain many different data types (ie int, float, char... etc)

To access the structure, you must create a variable of it.
Use the "struct" keyword inside the "main()" method, followed by the name of the structure and then the name of the structure variable:

To access members of a structure, use the dot syntax (.)

*/

#include <stdio.h>
//Creating a structure called mystructure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];  // String
};

int main(){
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    struct myStructure s2;

    //Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'A';
//    s1.myString = "Some text";    Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:
//    However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString
// Assign a value to the string using the strcpy function
    strcpy(s1.myString, "Some text");

    s2.myNum = 1311;
    s2.myLetter = 'B';
//    s3.myString = "Some more text";   Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:
//  However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString
// Assign a value to the string using the strcpy function
    strcpy(s2.myString, "Some more text");
    // Print values
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s", s1.myString);
    printf("\nMy number: %d\n", s2.myNum);
    printf("My letter: %c\n", s2.myLetter);
    printf("My string: %s", s2.myString);
    return 0;

}
