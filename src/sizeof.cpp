#include <iostream>
#include <string>

using namespace std;

int main() {
    // sizeof(): é um operador
    // Memória dedicada ao tipo dos elementos * quantidade de elementos = memória total do array
    int value = 34;
    int ageArray[2][2] = {
        {12, 18}, {51, 49}
    };


    // É possível definir array com tamanhos definidos e não definidos ao mesmo tempo

    cout << "Size of integer variable " << value << ": " << sizeof(value) << " bits." << endl;
    cout << "===============" << endl;
    cout << "Showing the array of ages" << endl;
    for(int row=0;row<2; row++) {
        for(int col=0; col<2; col++) {
            cout << ageArray[row][col] << endl;
        }
    };

    cout << "===============" << endl;
    cout << "Size of the array: " << sizeof(ageArray) << " bits." << endl;
    cout << "Size of a string: " << sizeof(string) << endl;
    cout << "===============" << endl;

    string stringArray[][4] = {
        {"Guilherme", "Morais", "China"},
        {"Isabela", "Morais", "China", "Costa"},
        {"Edson", "China", "Costa"}
    };

    int totalRows = sizeof(stringArray) / sizeof(stringArray[0]);
    int totalCols = sizeof(stringArray[0]) / sizeof(string);

    for(unsigned int idx=0; idx < totalRows; idx++){
        for(unsigned int col=0; col < totalCols;col++){
            cout << "Current element > " << stringArray[idx][col] << endl;
        }
    };

    return 0;
}
