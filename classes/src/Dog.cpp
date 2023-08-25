#include <iostream>
#include <sstream>
#include "../include/Dog.h"

// É o constructor da classe
Dog::Dog(std::string dogName) {
    name = dogName;
    age = 0;
    std::cout << "The dog " << dogName << " has been created!" << std::endl;
}

// Outro constructor da classe. Com diferentes parâmetros
Dog::Dog(std::string newName, std::string race, int age) {
    name = newName;
    race = race;
    age = age;
}

Dog::~Dog() {
    std::cout << "The dog " << name << " has been destroyed!" << std::endl;
}

void Dog::toString() {
    std::stringstream dogInfo;
    dogInfo << "Dog's name: " << name << "; Age: " << age;
    std::cout << "Dog's name: " << name << "; Age: " << age << std::endl;
}

// método getter. Usado para pegar o valor de um data member.
std::string Dog::getName(){
    return name;
}

int Dog::getAge(){
    return age;
}

// método setter. Usado para trocar o valor de um data member.
void Dog::setName(std::string newName) {
    std::string oldName = name;
    name = newName;
    std::cout << "Dog name has changed from "<< oldName << " to " << name << std::endl;
}

void Dog::bark(std::string name) {
    std::cout << name << " is barking!" << std::endl;
}

void Dog::jump() {
    std::cout << "The dog is jumping" << std::endl;
}

void Dog::eat() {
    std::cout << "The dog is eating" << std::endl;
}

void Dog::pee() {
    std::cout << "The dog is peeing" << std::endl;
}

void Dog::sleep() {
    std::cout << "The dog is sleeping" << std::endl;
}

void Dog::wake() {
    std::cout << "The dog is waking" << std::endl;
}

void Dog::isHappy() {
    if(happy){
        std::cout << "The dog is happy!" << std::endl;
        return;
    }
    std::cout << "The dog is not happy!" << std::endl;
}

void Dog::makeHappy() {
    happy = true;
}

void Dog::makeSad() {
    happy = false;
}
