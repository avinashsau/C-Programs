/* Strings are used for storing text/ characters.
Unlike many other programming language, C doesnot have String type to easily create
string variable. instead you must use CHAR type to create array of characters to make a string in C

*/

#include <stdio.h>

int main(){
char greetings[] = "Hello World";
printf("%s\n", greetings);
printf("%s\n", greetings);

// Access Strings
printf("%c\n", greetings[0]);

// Modify Strings
greetings[0] = 'J';
printf("%s\n", greetings);
// Outputs Jello World! instead of Hello World!

// Another way of creating Strings
char greetingss[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s\n", greetingss);

// Size of different type of Strings definitions
char greetings1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";

printf("%lu\n", sizeof(greetings1));   // Outputs 13
printf("%lu\n", sizeof(greetings2));  // Outputs 13

// Special characters
char txt[] = "We are the so-called \"Vikings\" from the north.";
printf("%s\n", txt);

char txt1[] = "It\'s alright.";
printf("%s\n", txt1);

return 0;
}
