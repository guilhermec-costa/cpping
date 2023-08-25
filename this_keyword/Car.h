#ifndef CAR_H_
#define CAR_H_

#include <iostream>


class Car {
private:
    std::string name;
    int kmRunned;
    std::string brand;
    float price;

public:
    Car(std::string name, std::string brand, int kmRunned, int qtyDoors);
    Car(std::string name, int kmRunned);
    // Inicialização feita diretamente no header, e sem ponteiro "this"
    Car(): name("unnamed"), kmRunned(0) {};
    ~Car();
    std::string currentState;
    std::string toString();
    void run();
    void stop();
    void addKms(int kms);
    std::string getName();
    std::string getBrand();
    float getPrice();
    int getRunnedKms();

};

#endif
