#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;

    Person* ptr = &person1; // Pointer ke struct Person

    std::cout << "Nama: " << ptr->name << std::endl;
    std::cout << "Usia: " << ptr->age << std::endl;

    return 0;
}
