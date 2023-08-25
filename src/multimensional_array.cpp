#include <iostream>

using namespace std;

int main() {
    
    string animals[2][3] = {
        {"Churros", "Shoyou", "Getúlio"},
        {"Edson", "Luciane", "Isabela"}
    };

    cout << "First item of the 2x3 string array > " << animals[0] << endl;
    cout << "Second item of the 2x3 string arrat > " << animals[1] << endl;
    cout << "---------------" << endl;

    cout << "Iterating over the 2x3 array: " << endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
            cout << "Row: " << row << " | " << "Column: " << col << " > " << animals[row][col] << endl;
            };
    };

    return 0;
}
