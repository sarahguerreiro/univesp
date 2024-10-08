#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, *p1, *p2; /*começo declarando minhas variasveis todas de inteiro*/

    a = 4; /*atribuo um valor inicial para a*/
    b = 3;
    p1 = &a; /*indico p q endereço de memoria meu p1 vai apontar, no caso o a*/
    p2 = p1; /*p2 tb aponta p a*/
    *p2 = *p1 + 3;/*aqui eu digo q o conteudo de p2 será igual ao conteudo de p1 + 3, ou seja, 7*/ b = b * (*p1)/*atualizo o conteudo de b para 21*/; (*p2)++;/* *p2 = *p2 + 1 incremento meu p2 em 1(8) */
    p1 = &b; /*p1 agora aponta para b*/

    printf("%d %d\n", *p1, *p2); /*resultado esperado: 21 8*/
    printf("%d %d\n", a, b); /*resultado esperado: 8 21*/
}

/*no fim das contas, mudamos o valor das variaveis inteiras para o mesmo valor dos ponteiros de inteiro. Alteramos o valor das variaveis de maneira indireta, a partir de ponteiros*/