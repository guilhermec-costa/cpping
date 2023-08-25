#include <iostream>
#include "Car.h"

int main() {
    Car car1("Ford Ka", "Ford", 250, 4);
    Car car2("Uno quadrado", 555);
    Car car3;

    std::cout << car1.currentState << std::endl;
    std::cout << car1.getRunnedKms() << std::endl;
    car1.addKms(50);
    std::cout << car1.getRunnedKms() << std::endl;
    std::cout << "Localização do objeto 'car1' na memória > " << &car1 << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << car3.toString() << std::endl;
    // &: esse operador mostra a localização do objeto na memória
    return 0;
}
