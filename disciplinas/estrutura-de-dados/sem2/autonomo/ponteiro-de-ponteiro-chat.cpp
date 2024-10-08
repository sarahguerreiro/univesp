/*No exemplo abaixo temos um código gerado pelo ChatGPT com o objetivo de dar um exemplo de aplicação para o uso de ponteiro de ponteiros. A função mudarValor() está modificando o ponteiro para apontar corretamente para uma variável estática.*/

#include <stdio.h>
#include <iostream>

void mudarValor(int **ptr2) {
    static int y = 20;
    *ptr2 = &y; // Altera o ponteiro original para apontar para `y`
}

int main() {
    int x = 10;
    int *ptr = &x;

    mudarValor(&ptr);

    std::cout << *ptr << std::endl; // Agora imprime 20, pois `ptr` foi alterado
    return 0;
}
