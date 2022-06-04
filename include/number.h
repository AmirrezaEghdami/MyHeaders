#include <stdio.h>

void printAtoB(int a, int b){
    if (a < b){
        for (int i = a; a <= b; a++){
            printf("%d\n",a);
        }
    }
    else if(a > b){
        for (int i = a; a >= b; a--){
            printf("%d\n",a);
        }
    } else {
        printf("%d\n",a);
    }
}