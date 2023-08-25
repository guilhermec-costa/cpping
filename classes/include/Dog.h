#ifndef DOG_H_
#define DOG_H_
#include <sstream>
#include <string>
#include <iostream>

// aqui fica o protótipo da função

// blueprint do cachorro

class Dog {

private:
    bool happy = true; // data member / variável da instância
    std::string name;
    int age;

public:
    Dog(std::string dogName); // Constructor semprem são executados após a instância da classe ser criada.
    Dog(std::string newName, std::string race, int age);
    // É possível ter dois constructors diferentes, se difererirem nos parâmetros
    ~Dog(); // Destructor da classe. Desaloca memória da instância depois que a main é terminada
    void toString();
    void setName(std::string newName);
    std::string getName();
    int getAge();
    void bark(std::string name);
    void jump();
    void eat();
    void pee();
    void sleep();
    void wake();
    void isHappy();
    void makeHappy();
    void makeSad();
};

#endif
