#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};
    int* arrPtr = arr; // Pointer ke elemen pertama dalam array

    for (int i = 0; i < 4; i++) {
        // Menggunakan pointer untuk mengakses elemen array
        std::cout << "Elemen ke-" << i << ": " << *arrPtr << std::endl;
        arrPtr++; // Pindah ke elemen berikutnya dalam array
    }

    return 0;
}
