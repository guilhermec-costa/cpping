#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float randomFloat = 1.154;
    cout << "1.154" << " is actually " << setprecision(15) << randomFloat << endl;
    if(randomFloat > 1.154) {
        cout << "It is not equal, but it is very close to 1.154";
    } else {
        cout << "It is greater than 1.154";
    }
    
    return 0;
}
