#include <iostream>

int main() {
    int* dynamicPtr = new int; // Mengalokasikan memori dinamis untuk variabel int

    *dynamicPtr = 42; // Menetapkan nilai

    std::cout << "Nilai yang dialokasikan secara dinamis: " << *dynamicPtr << std::endl;

    delete dynamicPtr; // Menghapus memori yang dialokasikan dinamis

    return 0;
}
