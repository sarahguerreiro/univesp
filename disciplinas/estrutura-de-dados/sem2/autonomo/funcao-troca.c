#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int a = 10;
int b = 20;

int main(){

troca(&a,&b);

}