/*
 Let's write a program (called "Add2Numbers.cpp") that Prompt user for two integers and print their sum, difference, product and quotient(IntegerArithmetic.cpp)

 */

#include <iostream>
using namespace std;
 
int main() {
   int firstInt; //Declaro uma var do tipo inteiro pra receber o 1o numero do user
   int secondInt; // para o segundo user
   int sum, difference, numeroDeSorte, product, quotient; // é possivel declarar mais de uma variavel numa mesma declaração desde q sejam do mesm tipo
   cout << "Digite o primeiro numero inteiro:"; // disparo uma caixa de dialogo com o user para pegar o primeiro numero
   cin >> firstInt; // com o uso do cin atribuo o valor resgatado pelo cout à firstInt
   cout << "Digite o segundo numero inteiro:";
   cin >> secondInt;

   cout << "Digite o seu numero da sorte e o dia do seu nascimento(separado por um espaco)";
   cin >> firstInt >> secondInt;
   
   // defino as operações aritméticas envolvidas:

   sum = firstInt + secondInt;
   difference = firstInt - secondInt;
   product = firstInt * secondInt;
   quotient = firstInt / secondInt;
   numeroDeSorte = firstInt + secondInt;
   

   // printo o resultado:

   cout << "A soma entre os numeros e: " << sum << endl;
   cout << "A diferenca entre os numeros e: " << difference << endl;
   cout << "O produto dos numeros e: " << product << endl;
   cout << "O quociente dos numeros e: " << quotient
    << endl;
   cout << "Seu novo numero da sorte e: " << numeroDeSorte << endl;

 
   return 0;
}