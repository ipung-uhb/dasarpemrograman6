#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};
    int* arrPtr = arr; // Pointer ke elemen pertama dalam array

    // Mengakses elemen-elemen dalam array menggunakan pointer
    std::cout << "Elemen ke-2: " << *(arrPtr + 1) << std::endl;
    std::cout << "Elemen ke-4: " << *(arrPtr + 3) << std::endl;

    return 0;
}
