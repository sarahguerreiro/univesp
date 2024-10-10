#include <stdio.h>
#include <stdlib.h>

typedef struct data{int Dia, Mes, Ano;}
    DATA;

typedef struct pessoa{
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;
}   PESSOA;

void Mostrar(struct pessoa *x) {

    printf("Nome: %s\n", x->Nome);
    printf("Idade: %d\n", x->Idade);
    printf("Salario: %.2f\n", x->Salario);
    printf("Data de Nascimento: %d/%d/%d\n", x->Nasc.Dia, x->Nasc.Mes, x->Nasc.Ano);
}

int main(){

    struct pessoa *p = malloc(sizeof(struct pessoa));
    *p = (struct pessoa) {"Sarah", 28, 500.00,{28,03,1996}};
    
    Mostrar(p);
    free(p);
    return 0;
}

