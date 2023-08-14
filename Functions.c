/* A function is a block of code which only runs when it is called.
you can pass data, known as parameters, into the function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

PREDEFINED FUNCTIONS
so it turns out you already known what a function is. you have been using it the whole time while studying the tutorial!

for example, main() is a function, which is used to execute code,
and printf() is a function; used to output / print text to the screen;

CREATE a FUNCTION
To create ( often referred to as declare) your own function, specify the name of the function, followed
by parentheses () and curly brackets {}:

void myFunction() {
  // code to be executed
}

*/

#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed!\n");
}

int main(){
myFunction();
myFunction();
myFunction();
myFunction();
myFunction();

return 0;
}
