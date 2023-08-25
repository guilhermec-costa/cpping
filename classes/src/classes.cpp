#include <iostream>
#include <sstream>
#include "../include/Dog.h"

using namespace std;

// Processo de compilação:
// 1) Compilação: gerar arquivos objetos dos arquivos .cpp. Não há vinculação entre eles.
// Para isso: g++ -c arquivo.cpp -o arquivo.o
// 2) Vinculação: linkar os arquivos objetos gerados
// Para isso: g++ -o executavel arquivo1.o arquivo2.o


int main() {
    Dog dog1("Churros"); // instância da classe
    Dog dog2("Shoyou");
    Dog dog3("Getúlio", "Vira lata", 12);
    std::cout << "-------------" << endl;
    dog1.makeHappy();
    dog2.makeSad();
    cout << "----------------" << endl;
    cout << dog1.getName() << endl;
    cout << dog2.getName() << endl;


    dog1.bark(dog1.getName());
    dog1.eat();
    dog1.sleep();
    dog1.wake();
    dog1.isHappy();
    cout << "-------------" << endl;

    
    dog2.bark(dog2.getName());
    dog2.jump();
    dog2.pee();
    dog2.isHappy();
    cout << "-------------" << endl;
    cout << "Changing dogs name" << endl;
    dog1.setName("Getúlio");
    dog2.setName("Boomer");

    dog1.bark(dog1.getName());
    dog2.bark(dog2.getName());
    cout << "-------------" << endl;

    dog3.bark(dog3.getName());
    dog3.getAge();

    cout << "-------------" << endl << "End" << endl;
    dog1.toString();
    dog2.toString();
    dog3.toString();

    return 0;
}


