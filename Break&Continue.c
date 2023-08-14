#include <stdio.h>

int main(){

int i;

// Break Statement
for(i=0;i<10;i++){
    if(i==5){
        break;
    }
    printf("%d\n", i);

}

//Continue Statement

for(i=0;i<10;i++){
    if(i==5){
        continue;
    }
    printf("%d\n", i);
}
return 0;
}
