#include <iostream>
#include <sstream>

int main() {
    int age = 18;
    std::string name = "Guilherme";

    std::stringstream ss;
    // esse objeto permiti printar variáveis de diferentes tipos em uma mesma string
    ss << "My name is " << name << " and my age is " << age << std::endl;
    std::cout << ss.str() << std::endl;
    return 0;
}
