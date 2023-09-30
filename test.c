#include <stdio.h>

void lol(int *p){
    *p = 50;
}

int main(){
    int l = 10;
    printf("%d\n", l);
    l = 20;
    printf("%d\n", l);
    lol(&l);
    printf("%d\n", l);
}