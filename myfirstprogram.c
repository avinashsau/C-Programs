#include <stdio.h>
#include <stdbool.h>
int main()
{
int myNum = 108;
float myFloatNum = 108.1;
char myLetter = 'D';
printf("Hello World!");
printf("i am learning C");
printf("\nHello world! \n I am learning C.\n and this is Awesome\n");

// This is a single line comment

/*this is a multiple line comment
as you can see*/

printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

printf("my fav number is %d and my Fav letter is %c", myNum, myLetter);


// Variables...
int x=10, y=20, z=31;
printf("\n%d", x+y+z);

//variable Example 2

int a, b, c;
a = b = c = 50;
printf("\n%d\n", a+b+c);

/*Constants - when you don't want others or yourself to change or override
the value of a variable you need to declare it as constant*/

// when you declare a constant variable, it must be assigned with a value.
//it is good practive to declare the constant variables in UPPERCASE.

const int myNum2 = 100;
//myNum2 = 200;        // you will get error message for this line as the given variable is a constant
printf("\n%d\n", myNum2);
//__________________________________________________________
// "Size of" Operator : Memory size in Byte of a datatype or a variable can be found with the sizeof operator

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));
//___________________________________________________________
/*Boolean - I C Boolean is not a built in data type like int and char
we must import the header file "stdbool.h" file to use it*/
bool isProgramingFun = true;
bool isFishTasty = false;
printf("\n%d\n", isProgramingFun);
printf("\n%d\n", isFishTasty);

// comparing values and variables
printf("%d\n", 10 > 9); // returns true(1) if 10 is greater, otherwise return false(0)

// another example
int myAge = 35;
int voatingAge = 18;

if(myAge >= voatingAge){
    printf("Old enough to vote\n");
}
else{
    printf("Not old enough to vote\n");
}
// If Else Statement__________
//example 1
if(20>18){
    printf("20 is greater than 18\n");
}

// Example 2
int xx = 20;
int yy = 18;
if (xx > yy){
    printf("%d is greater than %d\n", xx, yy);
    printf("xx is greater than yy\n");
}
//Else statement example
int time = 20;
if (time < 18){
    printf("good morning\n");
}
else{
    printf("good evening\n");
}
// example of if-else if - else statement
int tt = 22;
if (tt < 10){
    printf("good Morning\n");
} else if (tt < 20){
printf("Good day\n");
} else{
    printf("good evening \n");
}
// another example of If else statement
int number = -1;
if(number > 0){
    printf("the number is positive\n");
}else if(number < 0){
    printf("the number is negative \n");
}else{
    printf("the value is 0\n");
}
//short hand of if=else ie ternary operator
int samay = 10;
(samay < 18)? printf("good day\n"):printf("good evening\n");
//________________________________________
// Switch statement
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
  default:
    printf("Looking forward to the Weekend");
}
//
























return 0;
}

