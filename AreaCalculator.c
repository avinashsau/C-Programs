/*
calculate Area of different shapes
*/
#include <stdio.h>

int square(int x);
int rectangle(int x, int y);
int circle(int x);

int main(){

  int i, side, len, bre, redius, result;
    printf("Enter a number for Calculating the Area of below shapes: \n1.> Calculate Area of Square.\n2.> Calculate Area of Rectangle.\n3.> Calculate Area of Circle.\nYOU HAVE SELECTED: - \t");
    scanf("%d",&i);
    switch (i){
    case 1:
        printf("\nEnter the length of SIDE of SQUARE: ");
        scanf("%d", &side);
        result = square(side);
        printf("\n The Area of SQUARE is : %d", result);
        break;
    case 2:
        printf("\nEnter the length of RECTANGLE: ");
        scanf("%d", &len);
        printf("\nEnter the length of SIDE of RECTANGLE: ");
        scanf("%d", &bre);
        result = rectangle(len, bre);
        printf("\n The Area of SQUARE is : %d", result);
        break;
    case 3:
        printf("\nEnter the redius of CIRCLE: ");
        scanf("%d", &redius);
        result = circle(redius);
        printf("\n The Area of SQUARE is : %d", result);
        break;
    default:
        break;
    }
    return 0;
}

int square(int x){
    int area = x * x;
    return area;
}

int rectangle(int x, int y){
    int area;
    area = x * y;
    return area;
}

int circle(int x){
    int area;
    area = 3.14 * x * x;
    return area;
}
