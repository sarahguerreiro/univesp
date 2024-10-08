/*
 Exercises
    Write programs called PrintPatternX.cpp (where X from A to D) to print EACH of the following patterns. Use one "cout <<" for each line of outputs. End each line by printing an "endl".
 */
#include <iostream>
using namespace std;
 
void printPatternA() {
    cout << "* * * * *" << endl;
    cout << " * * * * *" << endl;
    cout << "* * * * *" << endl;
    cout << " * * * * *" << endl;
    cout << "* * * * *" << endl;
}
void printPatternB() {
    cout << " * * * *" << endl;
    cout << " *     *" << endl;
    cout << " *     *" << endl;
    cout << " *     *" << endl;
    cout << " * * * *" << endl;
}
void printPatternC() {
    cout << "  * * * * * " << endl;
    cout << "   * * * * " << endl;
    cout << "    * * * " << endl;
    cout << "     * * " << endl;
    cout << "      * " << endl;
}
void printPatternD() {
    cout << "    *    " << endl;
    cout << "   * *    " << endl;
    cout << "  *   *  " << endl;
    cout << "   * *    " << endl;
    cout << "    *    " << endl;
}

int main() {
   // Chamando cada função para imprimir os padrões

    printPatternA();
    cout << endl; // para ter uma linha em branco entre os padrões

    printPatternB();
    cout << endl;

    printPatternC();
    cout << endl;

    printPatternD();
    
 
   return 0;
}