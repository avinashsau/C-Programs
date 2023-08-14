/* RECURSION is the technique of making a function call itself. this technique provides a way to break complicated
problems down into simple problems which are easier to solve.

RECURSION EXAMPLE
Adding two number is easy to do, but adding a range of numbers is more complicated. in the following
example, recursion is used to add a range of numbers together by breaking it down into the simple task
of adding two numbers:

*/

#include <stdio.h>

int sum(int x);

int main(){

int num, result;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\nEntered Number is %d\n", num);

  result = sum(num);
  printf("\nThe result is: %d", result);
  return 0;
}

int sum(int k){
  if (k>0){
    return k + sum(k-1);
  }else {
    return 0;
  }
}
