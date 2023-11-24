#include <stdio.h>

int main(){
    int a, i = 1;
    while(i <= 10){
        a = i % 2;
        if(a == 0){
            printf("%d\n", i);
        }
        i++;
    }
}