#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    string pwd = "abc";

    string typedPwd;
    cout << "Try to match the password > " << flush;
    cin >> typedPwd;
    
    while(typedPwd!=pwd) {
        cout << "Passwords have not matched! Try it again > " << flush;
        cin >> typedPwd;
    }
    
    string secondPwd = "def";
    string typedPwd2;

    cout << "The passwords have matched." << endl;
    cout << "------------------" << endl << "Try to match the second password..." << endl;
    cout << "Type your guess here > " << flush;
    cin >> typedPwd2;

    while(true) {
        if(typedPwd2==secondPwd) {
            cout << "The passwords have matched again!" << endl;
            break;
        } else {
            cout << "The passwords have not match! Try it again > " << flush;
            cin >> typedPwd2;
            if(typedPwd2==secondPwd) {
                break;
            }
        }
    }

    cout << "\n---------------" << endl;
    cout << "Working with counters" << endl;

    int counter = 0;
    int userInputCounter;
    cout << "The programm is going to loop until the counter reachs the number the user inputs" << endl;
    cout << "What is the number you want the counter to assume: " << flush;
    cin >> userInputCounter;
    
    while(counter<=userInputCounter) {
        cout << "Current counter state: " << counter << endl;
        counter++; // counter += 1 || counter = counter + 1
        // incrementa variável em um inteiro
    }
    cout << "The counter has finally reached " << userInputCounter << endl;
    cout << "Quitting the program..." << endl;

    // do-while loops
    
    const string SECRET_STRING = "c++";
    string userInputSecret;
    do {
        cout << "Try to match the secret word > " << flush;
        cin >> userInputSecret;
        if(userInputSecret!=SECRET_STRING){
            cout << "Access denied! Try again" << endl;
        }

    } while(userInputSecret!=SECRET_STRING);
    cout << "Access accepted!" << endl;

    return 0;

}
