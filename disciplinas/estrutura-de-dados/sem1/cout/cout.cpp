// endl é um símbolo especial usado para produzir uma nova linha.
// Para printar strings, é necessário o uso de aspas duplas, como nas outras linguagens e para numeros, sem aspas duplas.
//scape-sequences: Uma sequência de escape começa com uma barra invertida ( \ ) chamada de caractere de escape e os caracteres subsequentes definem o significado da sequência de escape.
// recomendo fortemente o uso endl p imprimir uma nova linha, em vez de '\n'. Isso pq o delimitador de linha depende do sistema: Windows usa "\r\n"; UNIX/Linux/Mac usa '\n'. 
// O endl produz uma nova linha específica do sistema. Além disso, endl garante que a saída seja liberada; enquanto o '\n' não. 

#include <iostream>
using namespace std;

int main() {
    cout << "essa" << " sera " << "uma linha inteira!" << endl;
    cout << "Aqui" << endl << "tera uma quebra de linha" << endl << "mais uma." << endl << "numeros abaixo" << endl << 5 << 4 << 3 << " " << 2.2 << 1.1 << endl;

    cout << "o simbolo no final dessa frase tbm gera uma nova linha\n" << "\tja este simbolo, \tdeixa o texto \ttabulado";
    return 0;
}