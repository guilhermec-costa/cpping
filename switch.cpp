#include <iostream>

using namespace std;

int main() {
    int userValue = 0;
    cout << "Type a value > " << flush;
    cin >> userValue;

    int rest = userValue%2;

    switch(rest) {
        case 0:
            cout << "You typed a even number!" << endl;
            break;
        case 1:
            cout << "You typed a odd number!" << endl;
            break;
        defaut:
            break;
    }

    cout << "=============" << endl;
    char userChar;

    cout << "Type a character > " << endl;
    cin >> userChar;

    switch(userChar) {
        case 65:
            cout << "You typed \"A\"" << endl;
            break;

        case 66:
            cout << "You typed B" << endl;
            break;

        default:
            cout << "You didn't type neither A or B" << endl;
            break;
    }

    cout << rest;
    return 0;
}
