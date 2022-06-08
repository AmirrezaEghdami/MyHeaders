#include <stdio.h>

void printAtoB(int a, int b){
    if (a < b){
        for (int i = a; i <= b; i++){
            printf("%d\n",i);
        }
    }
    else if(a > b){
        for (int i = a; i >= b; i--){
            printf("%d\n",i);
        }
    } else {
        printf("%d\n",a);
    }
}