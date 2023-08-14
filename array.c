#include <stdio.h>

int main(){
int myNum[5] = {0,9,8,7,100};
int i, j;
// Creating and printing an array
for(i=0;i<5;i++){
    printf("%d\t", myNum[i]);
}
printf("\n");
// changinf the value of an element in array
myNum[3]=100;
for(i=0;i<5;i++){
    printf("%d\t", myNum[i]);
}
printf("\n\n\n\n\n");
// Multi Dimensional Array
int multid[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%d\t", multid[i][j]);
    }
    printf("\n");
}

return 0;
}
