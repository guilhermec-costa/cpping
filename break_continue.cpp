#include <iostream>

using namespace std;

int main() {
    cout << "---------------" << endl;
    cout << "How \"break\" works" << endl;
    for(int i=0; i<=8; i++) {
        if(i==3) {
            break;
        }
        cout << "Current value of i: " << i << endl;
    }
    cout << "---------------" << endl;
    cout << "How \"continue\" works" << endl;
    cout << "Only even numbers should be outputted. Let's see if it happens" << endl;

    short x = 0;
    while(x<=10){
        if(x==3){
            continue;
        }
        cout << "Current value: " << x;
        x++;
    }
    return 0;
}
