#include <iostream>

using namespace std;

void menuOptions(){

    cout << "==========================" << endl;
    cout << "1) Adicionar dinheiro à conta: " << endl;
    cout << "2) Retirar dinheiro da conta: " << endl;
    cout << "3) Ver balanço atual: " << endl;
    cout << "4) Sair do programa: " << endl;
    cout << "==========================" << endl;
}

int choosedOption(){
    int option;
    cout << "Escolha uma opção (4 ou enter para sair) > " << flush;
    cin >> option;
    cout << endl;

    return option;
}

// protótipo da função.
// permite ela ser definida em qualquer lugar do código fonte
// float addBalance(float currentBalance, float valueToAdd);
// float removeBalance(float currentBalance, float valueToRemove);

float addBalance(float currentBalance, float valueToAdd){
    return currentBalance + valueToAdd;
}

float removeBalance(float currentBalance, float valueToRemove) {
    return currentBalance - valueToRemove;
}
int main() {
    
    float userBalance = 0;

    while(true) {
        menuOptions();
        int userOption = choosedOption();
    
        switch(userOption){

            case 1: {
                float toAddBalance = 0;
                cout << "Quanto deseja adicionar à conta > R$ " << flush;
                cin >> toAddBalance;

                userBalance = addBalance(userBalance, toAddBalance);
                cout << "Foram adicionados R$ " << toAddBalance << " com sucesso da sua conta!" << endl;
                break;
            }

            case 2: {
                float tmpBalanceRemoved = 0;
                cout << "Quanto deseja retirar da conta > " << flush;
                cin >> tmpBalanceRemoved;

                userBalance = removeBalance(userBalance, tmpBalanceRemoved);
                cout << "Foram retirados R$ " << tmpBalanceRemoved << " com sucesso da sua conta!" << endl;
                break;
            }

            case 3: {
                cout << "Seu saldo atual: R$ " << userBalance << endl;
                break;
            }
        }

    if(userOption==4){
            cout << "Obrigado por usar o programa. Saindo..." << endl;
            break;
        }
    }
    return 0;
}


