#include <iostream>

using namespace std;

int main() {
    int iArray[3];
    iArray[0] = 5;
    iArray[1] = 10;
    iArray[2] = 15;

    cout << "First item: " << iArray[0] << endl;
    cout << "Second item: " << iArray[1] << endl;
    cout << "The whole array: " << iArray << endl;

    double dArray[3] = {1.5, 3.0, 4.5};
    cout << "First double value > " << dArray[0] << endl;
    cout << "Second double value > " << dArray[1] << endl;
    cout << "Third double value > " << dArray[2] << endl;
    cout << "A automatic gernerated number from the computer > " << dArray[3] << endl;
    cout << "---------------" << endl;

    // iterando sobre um array
    for(int i=0; i<3; i++){
        cout << "Current value of array > " << dArray[i] << endl;
        }
    
    cout << "---------------" << endl;
    int sArray[] = {}; // também é possível inicializar o array,  sem tamanho definido
    // int sArray[] = {1, 2, 3, 4, 5} - dessa forma, não é preciso dizer o tamanho do array
    for(int x=0; x<=5; x++){
        sArray[x] = x;
        cout << "Current value of array > " << sArray[x] << endl;
    }

    int choosedTable;
    cout << "---------------" << endl;
    cout << "Showing a table o numbers choosed by the user!" << endl;
    cout << "What number table would you like to see ? Type here > " << flush;
    cin >> choosedTable;
    cout << "<<<<<<<<" << " Table of " << choosedTable << " >>>>>>>>" << endl;
    for(int n=1; n<=10; n++){
        int currentTotal = n * choosedTable;
        cout << n << " x " << choosedTable << " = " << currentTotal << endl;
    }
    cout << "===============" << endl;
    cout << "Showing the same table, but now with \"while\"" << endl;
    int c = 1;
    while(c<=10){
        int currentTotal = c * choosedTable;
        cout << c << " x " << choosedTable << " = " << currentTotal << endl;
        c++;
        }
    cout << "===============" << endl;

    int randomArray[] = {5, 10, 15, 20};
    for(int idx=0; idx<4; idx++) {
        cout << randomArray[idx] << endl;
    }
    cout << "Size of this last array > " << sizeof(randomArray) << " bytes." << endl;
 


    return 0;
}
