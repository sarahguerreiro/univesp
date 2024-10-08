/*A linguagem de programação C é independente de máquina, ela é usada, principalmente, para criar muitos tipos de aplicativos e sistemas operacionais, como o Windows e outros programas complicados, por exemplo: o banco de dados Oracle, Git, interpretador Python e jogos, e é considerada uma base de programação no processo de aprendizagem de qualquer outra linguagem de programação. Sistemas operacionais e diversos softwares de aplicação para arquiteturas de computadores, que vão desde supercomputadores a CLPs e sistemas embarcados, são exemplos de tais aplicações.

Vamos analisar o código fornecido a seguir:*/

#include <stdio.h> 
void sub (int *x, int y) 
{
    *x = 3; y = *x + 1 ;
} 
int main () 
{
    int a, b, z; a = 1; b = 2; sub (&a, b); z = a + b; printf ("%d", z); 
    return 0;
}