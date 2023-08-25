#include <iostream>
#include <string>

using namespace std;

int main(){
    // "<<": insertion operator
    // ">>": extraction operator
    
    string userName;
    string sirname;

    cout << "Tell me your first name: " << flush;
    cin >> userName; // extrai o input e armazena na variável userName 
    cout << "Tell me your sirname: " << flush;
    cin >> sirname;

    int userAge = 0;
    cout << "Now tell your age: " << flush;
    cin >> userAge;
    cout << "So your fullname must be " << userName + " " + sirname << endl;
    cout << "And you are " << userAge << " years old." << endl;

    return 0;
}
