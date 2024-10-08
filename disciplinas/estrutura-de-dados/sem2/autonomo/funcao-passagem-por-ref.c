/*É passado a referencia de uma variavel(ou seja, um ponteiro) para a função, possibilitando alterar uma variavel que é externa a função*/

#include <stdio.h>
#include <stdlib.h>

/*funções void são usadas quando não vc não precisa de um retorno, pois esse tipo de função não retorna nada.*/

void soma(int x, int y, int *z){
    *z = x + y;
}

int a = 10;
int b = 20;
int c;

int main(){
    soma(a, b, &c);

    return 0;
}

/*no exemplo acima */