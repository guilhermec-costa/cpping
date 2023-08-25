#include <iostream>

using namespace std;

int main() {
    
    short x = 0;
    while(x<=10){
        cout << "Current value > " << x;
        if(x==3){
            continue;
        }
        x++;
    }
    return 0;
}

