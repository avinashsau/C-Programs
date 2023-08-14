#include<stdio.h>

int main(){
int base = 20;
int a, b, c, i;


    a = base/2 + 1;
    b = base/2 + 1;
    for(c=0;c<=base;c++){
    for(i=0;i<=a;i++){
        printf(" ");
    }
    for(i=a;i<=b;i++){
        printf("*");
    }
    for(i=b;i<=base;i++){
        printf(" ");
    }
    a--;
    b++;
    printf("\n");

}
printf("%d\n", base%2);
return 0;
}
