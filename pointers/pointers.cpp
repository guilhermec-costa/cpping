#include <iostream>
using namespace std;

int main() {

    int nValue = 15;

    int* pnValue = &nValue;
    // aponte para o inteiro que é igual ao endereço da memória da variável nValue.
    cout << &nValue << endl;
    cout << pnValue << endl;
    cout << "-------------" << endl;
    cout << "Value of the variable > " << *pnValue << endl;
    // desreferenciando um ponteiro para pegar o valor para o qual ele aponta
    return 0;
}
