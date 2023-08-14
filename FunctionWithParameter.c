/*PARAMETERS and ARGUMENTS
Information can be passed to functions as a parameter. parameters act as a variables inside the function.
Parameters are specified after the function name, inside the parameters.
you can add as many parameters as you want, just separate them with a comma

SYNTAX

returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/

#include <stdio.h>


// Multiple parameter Function

void myFunction(char name[], int age){
  printf("Hello %s. you are %d years old\n", name, age);
}

// Function with return value

int myReturnValueFn(int x){
    return 5+x;
}

// Multiple parameters

int multiParameter(int x, int y){
    return x + y;
}


 int main(){
  myFunction("Liam", 5);
  myFunction("Jenny", 6);
  myFunction("Anja", 7);

  printf("Result is: %d\n", myReturnValueFn(3));
  printf("Result is: %d\n", multiParameter(5, 7));

  int result = multiParameter(100, 8);
  printf("Result is: %d\n", result);

 return 0;
 }

























