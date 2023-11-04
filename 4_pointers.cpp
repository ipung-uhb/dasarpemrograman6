#include <iostream>

int main() {
    int x = 10;
    int* ptr1 = &x;
    int** ptr2 = &ptr1; // Pointer ke pointer

    // Mengakses nilai variabel x melalui pointer ke pointer
    std::cout << "Nilai x: " << **ptr2 << std::endl;

    return 0;
}
