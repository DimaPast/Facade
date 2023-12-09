#include <iostream>
#include <Windows.h>

class Subsystem1 {
public:
    void operation1() const {
        std::cout << "Subsystem1: Виконання операції 1." << std::endl;
    }

    void operation2() const {
        std::cout << "Subsystem1: Виконання операції 2." << std::endl;
    }
};


class Subsystem2 {
public:
    void operation1() const {
        std::cout << "Subsystem2: Виконання операції 1." << std::endl;
    }

    void operation2() const {
        std::cout << "Subsystem2: Виконання операції 2." << std::endl;
    }
};

class Facade {
private:
    Subsystem1 subsystem1;
    Subsystem2 subsystem2;

public:
    void operation() const {
        std::cout << "Facade: Виконання фасадної операції." << std::endl;
        subsystem1.operation1();
        subsystem1.operation2();
        subsystem2.operation1();
        subsystem2.operation2();
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Facade facade;
    facade.operation();

    return 0;
}