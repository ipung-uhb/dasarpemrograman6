#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person people[3]; // Array dari struct Person

    people[0].name = "Alice";
    people[0].age = 25;

    Person* ptr = people; // Pointer ke array of struct Person

    for (int i = 0; i < 3; i++) {
        std::cout << "Orang ke-" << i << ": " << ptr->name << " (Usia: " << ptr->age << ")" << std::endl;
        ptr++; // Pindah ke elemen berikutnya dalam array
    }

    return 0;
}
