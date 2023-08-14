/* A function consist of two parts:
 - DECLARATION: the function's name, return type, and parameters
 - DEFINITION: the body of the function (Code to be executed)

 void myFunction() { // declaration
  // the body of the function (definition)
}

for code optimization, it is recommended to separate the declaration and the definition of the function

You will often see C programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

*/

// Function declaration
void myFunction();
int addition(int x, int y);
int substraction(int, int);

// The main method
int main() {
  myFunction();  // call the function
  int result = addition(80, 28);
  printf("The result is: %d\n", result);
  int sub = substraction(111, 3);
  printf("The subtracted result is: %d\n", sub);
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!\n");
}

int addition(int x, int y){
    return x + y;
}

int substraction(int x, int y){
    return x - y;
}
