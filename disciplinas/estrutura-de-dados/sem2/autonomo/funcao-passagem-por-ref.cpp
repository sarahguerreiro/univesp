#include <iostream>

void soma(int &x, int &y, int &resultado) {
    // A função recebe referências para x, y e resultado.
    // Modifica diretamente os valores das variáveis passadas.
    resultado = x + y;

    std::cout << "NA FUNÇÃO" << std::endl;
    std::cout << "Endereço de x = " << &x << ", valor de x = " << x << std::endl;
    std::cout << "Endereço de y = " << &y << ", valor de y = " << y << std::endl;
    std::cout << "Endereço de resultado = " << &resultado << ", valor de resultado = " << resultado << std::endl << std::endl;
}

int main() {
    int a = 10; // Variável local a
    int b = 20; // Variável local b
    int c; // Variável local c, que vai armazenar o resultado da soma

    std::cout << "ANTES DE CHAMAR A FUNÇÃO" << std::endl;
    std::cout << "&a = " << &a << ", a = " << a << std::endl;
    std::cout << "&b = " << &b << ", b = " << b << std::endl;
    std::cout << "&c = " << &c << ", c = " << c << std::endl << std::endl;

    // Passando as variáveis por referência
    soma(a, b, c);

    std::cout << "DEPOIS DE CHAMAR A FUNÇÃO" << std::endl;
    // Após a execução da função, o valor de 'c' será alterado
    std::cout << "&a = " << &a << ", a = " << a << std::endl;
    std::cout << "&b = " << &b << ", b = " << b << std::endl;
    std::cout << "&c = " << &c << ", c = " << c << std::endl << std::endl;

    std::cout << "A soma de " << a << " e " << b << " é: " << c << std::endl;

    return 0;
}

/*
- Referências (&): Na função soma, os parâmetros int &x, int &y, e int &resultado são referências. Eles se referem às variáveis originais passadas da função main (a, b, e c), de modo que qualquer alteração nos valores de x, y, ou resultado modifica diretamente os valores de a, b, e c.

- Modificações diretas: Como estamos usando referências, a função soma modifica diretamente a variável c na função main. Diferente dos ponteiros, não é necessário desreferenciar, e a sintaxe é mais próxima do uso comum de variáveis.

- Eficiência: A passagem por referência é mais eficiente do que a passagem por valor, especialmente ao trabalhar com grandes estruturas, pois não é necessário fazer cópias. Além disso, em C++, as referências são mais seguras do que os ponteiros, já que uma referência sempre deve estar associada a uma variável válida, enquanto um ponteiro pode ser nulo.

- Comparação com ponteiros:
- Referências: São mais seguras e convenientes, pois você não precisa se preocupar com o endereço de memória ou desreferenciação. Não podem ser nulas, o que evita problemas como ponteiros inválidos.
- Ponteiros: Oferecem mais flexibilidade, permitindo que você manipule diretamente o endereço de memória, mas exigem mais cuidado para evitar erros (como acessar ponteiros nulos ou liberar memória incorretamente).
*/