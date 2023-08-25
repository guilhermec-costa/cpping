#include <iostream>
#include <sstream>
#include "Car.h"

Car::Car(std::string name, std::string brand, int kmRunned, int qtyDoors) {
    /*
     Quando o nome dos parâmetros da função são iguais ao nome de variáveis definidas na classe,
     a palavra "this" direciona para a variável definida na classe, e não o parâmetro da função.
     Daí não é preciso nomear os parâmetros com nomes diferentes.
     */
    this->name = name;
    this->brand = brand;
    this->kmRunned = kmRunned;
    this->currentState = "stopped";
    std::cout << "Localização do objeto na memória: " << this << std::endl;
    /*
    "this" é uma variável que contém a localização da memória daquele objeto específico. É um PONTEIRO.
     */
    std::cout << "Car has been created successfully!" << std::endl;
}

// Outra maneira mais eficiente de inicializar, sem precisar usar o ponteiro para especificar
// o local da memória. In-line method
Car::Car(std::string name, int kmRunned): name(name), kmRunned(kmRunned) {
    std::cout << "Car " << name << " has been created successfully!" << std::endl;
} 

Car::~Car() {
    std::cout << "Car " + name << " has been deleted!" << std::endl;

}

void Car::run() {
    currentState = "running"; 
    std::cout << "Car is now running!" << std::endl;
}

std::string Car::toString() {
    std::stringstream carInfo;
    carInfo << "Car name: " << name << "; Runned kilometers: " << kmRunned << " km." << std::endl;
    return carInfo.str();

}

void Car::stop() {
    currentState = "stopped";
    std::cout << "Car has stopped!" << std::endl;
}

int Car::getRunnedKms() {
    return kmRunned;
}

std::string Car::getName() {
    return name;
}

std::string Car::getBrand() {
    return brand;
}

float Car::getPrice() {
    return price;
}

void Car::addKms(int kms) {
    std::cout << "Added " << kms << " to current " << kmRunned << " Km's" << std::endl;
    kmRunned += kms;

}
