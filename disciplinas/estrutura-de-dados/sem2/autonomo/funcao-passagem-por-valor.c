/*execução de uma função usando a passagem de parâmetros por valor, em que é feita uma cópia do argumento/valor/variável que pode ser usada e alterada dentro da função sem alterar a variável original fora da função.*/

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y) {
    // Aqui, x e y são cópias dos valores passados de a e b, respectivamente
    int z = x + y; // z é uma variável local, que guarda a soma de x e y

    /* O puts imprime uma string simples na tela.
       a função puts pertence à biblioteca padrão <stdio.h>.
       Além disso, puts não aceita strings formatadas com argumentos (como printf), apenas strings simples. */
    puts("NA FUNÇÃO"); 
    // A função printf aqui está imprimindo o endereço de memória e o valor de x, y e z
    printf("&x = %p, x=%d\n", &x, x);
    printf("&y = %p, y=%d\n", &y, y);
    printf("&z = %p, z=%d\n\n", &z, z);

    return z; // A função retorna o valor de z para ser usado na função main
}

int main() {
    int a = 10; // Variável local a
    int b = 20; // Variável local b
    int c; // Variável local c, que vai receber o valor retornado pela função soma

    puts("ANTES DE CHAMAR A FUNÇÃO"); 
    // Mostra o endereço e o valor de a, b e c antes da chamada da função
    printf("&a = %p, a=%d\n", &a, a);
    printf("&b = %p, b=%d\n", &b, b);
    printf("&c = %p, c=%d\n\n", &c, c);

    c = soma(a, b); // Chamada da função soma com os valores de a e b

    puts("DEPOIS DE CHAMAR A FUNÇÃO"); 
    // Mostra o endereço e o valor de a, b e c após a execução da função
    printf("&a = %p, a=%d\n", &a, a);
    printf("&b = %p, b=%d\n", &b, b);
    printf("&c = %p, c=%d\n\n", &c, c);

    // Mostra o resultado da soma
    printf("A soma de %d e %d é: %d\n", a, b, c);

    return 0;
}

/*Explicação detalhada:

  - Na passagem de parâmetros por valor, uma cópia dos valores de 'a' e 'b' é feita quando chamamos a função 'soma'. 
  - Dentro da função, as variáveis 'x' e 'y' são essas cópias, ou seja, alterações feitas em 'x' e 'y' não afetam as variáveis 'a' e 'b' da função 'main'.
  - A função 'soma' usa um novo espaço de memória temporário para 'x', 'y', e 'z'. 
  - Quando a função termina, esse espaço de memória é liberado, mas o valor de 'z' é retornado para a função 'main', onde é atribuído à variável 'c'.
  
  - Após a execução da função, 'a' e 'b' permanecem inalterados, porque eles não foram modificados diretamente. 
  - A variável 'c' agora contém o resultado da soma, já que o valor de 'z' (que era x + y) foi retornado pela função.

  importante: A função 'soma' não altera o valor de 'a' e 'b', apenas usa seus valores. Portanto, isso evita o uso de memória extra para armazenar os valores originais. No entanto, enquanto a função é executada, a memória para 'x', 'y', e 'z' é alocada na stack temporariamente.

  Em outras palavras, o escopo das variáveis 'x', 'y', e 'z' é limitado à função 'soma', e elas não existem mais quando a função termina. Isso economiza memória, já que o espaço é liberado automaticamente após a execução da função. 'a' e 'b' continuam ocupando seu espaço original, e 'c' recebe o valor retornado pela função.
*/
