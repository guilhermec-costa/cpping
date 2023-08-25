#include <iostream>

using namespace std;

int main() {
    cout << "A increasing by 1 for loop" << endl;
    for(int i=0; i<=10; i++) {
        cout << "Current value of i: " << i << endl;
        }
    
    cout << "---------------" << endl;
    cout << "For loop increasing by 2:" << endl;
    for(int i=0; i<=10; i+=2){
        cout << "Current value of i: " << i << endl;
    }
    
    cout << "---------------" << endl;
    cout << "Saying if number is even or odd" << endl;
    for(int i=0; i<=10; i++){
        if(i%2==0){
            cout << i << " is a even number." << endl;
        } else {
        cout << i << " is a odd number." << endl;
        }
    }
    
    cout << "---------------" << endl;
    cout << "A decreasing for loop" << endl;
    for(int i=10; i>=0; i--) {
        cout << "Current value of i: " << i << endl;

    }

    return 0;
}
