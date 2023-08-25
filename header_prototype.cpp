#include <iostream>
#include "utils.h" // import o protótipo da função para esse arquivo
// É como se desse copy paste no arquivo do protótipo antes da compilação do código
// É um pré processamento de dados
// O pre-processor sempre olha para os sinais de hash(#) antes de compilar
// não são statments
using namespace std;

// esse é o protótipo da função.
// Permite ela ser definida em qualquer lugar do código
// O compilador confia que essa função foi definida em alguma parte do código.

int main() {
    doSomething();
    return 0;
}


void doSomething() {
    cout << "Hello world! " << endl;
}
