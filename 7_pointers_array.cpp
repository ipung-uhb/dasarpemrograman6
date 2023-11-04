#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int* ptr = numbers; // Pointer ke elemen pertama dalam array

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemen ke-" << i << ": " << *ptr << std::endl;
        ptr++; // Pindah ke elemen berikutnya dalam array
    }

    return 0;
}
