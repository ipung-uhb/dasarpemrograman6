#include <iostream>

// Fungsi untuk menukar nilai dua variabel dengan menggunakan pointer
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Sebelum pertukaran: " << std::endl;
    std::cout << "Nilai x: " << x << std::endl;
    std::cout << "Nilai y: " << y << std::endl;

    // Memanggil fungsi swap dengan menggunakan pointer
    swap(&x, &y);

    std::cout << "Setelah pertukaran: " << std::endl;
    std::cout << "Nilai x: " << x << std::endl;
    std::cout << "Nilai y: " << y << std::endl;

    return 0;
}
