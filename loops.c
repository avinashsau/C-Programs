#include<stdio.h>

int main(){

// While Loop
    int i = 0;
    while (i<5){
    printf("%d\n", i);
    i++;
}
// do-while Loop
int ii = 0;
do {
    printf("%d\n", ii);
    ii++;
}
while(ii<5);

//FOR Loop
for(i=0;i<=10;i++){
    printf("%d\n", i);
}

// Nested FOR Loop - Print a SQUARE
int j=0;
for(i=0;i<=20;i++){
    for(j=0;j<=40;j++){
        printf("A");
    }
    printf("\n");
}
return 0;
}

