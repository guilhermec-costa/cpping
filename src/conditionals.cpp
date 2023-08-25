#include <iostream>
#include <ostream>

using namespace std;

int main() {
    string pwd = "abc123";

    cout << "Type your password: " << flush;

    string typed_pwd;
    cin >> typed_pwd;

    if(typed_pwd==pwd) {
        cout << "The passwords have matched!" << endl;
    } else {
        cout << "The passords have not matched!" << endl;
        cout << "Your last chance to get it!" << endl;
        cout << "Type it again: " << flush;
        cin >> typed_pwd;
        
        string secretWord = "secret";
        if(typed_pwd==pwd || typed_pwd==secretWord) {
            cout << "Now you have got it (or typed the secret word)!";
        } else {
            cout << "You have not got it again!";
        }
    };

    short secretNumber1 = 7;
    short secretNumber2 = 10;
    short typedFirst;
    short typedSecond;
    cout << "\n-------------" << endl;
    cout << "Let's make another test" << endl;
    cout << "Now try to guess the two secret numbers: \n" << "-------------" << endl;
    cout << "First number guess > " << flush;
    cin >> typedFirst;
    cout << "Second number guess >" << flush;
    cin >> typedSecond;
    if(typedFirst==secretNumber1 && typedSecond==secretNumber2) {
        cout << "You have guessed both numbers correctly!";
    }
    else {
        if(typedFirst==secretNumber1 || typedSecond==secretNumber2) {
            cout << "You have guessed correctly at least one secret number!";
        } else {
            cout << "You have guessed incorrectly both secret numbers!";
        }
    }

    return 0;
}
