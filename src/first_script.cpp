#include <iostream> // arquivos inclusos antes do processo de compilação
#include <ostream>

using namespace std;

int main(){
    cout << "First text in c++" << flush;
    // lush: não é um line feeding carriage return. Não cria uma nova linha
    // endl: cria uma nova linha, e diz para o OS cleanar a memória do buffer e exibir o texto até ali escrito. Além disso, faz o flsu do buffer também
        cout << "Hello world" << endl;
    cout << "Concatenando 'esse texto'" << " com 'esse texto'" << endl;
    return 0;
}
