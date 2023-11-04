#include <iostream>

int main() {
    int x = 10;
    int* ptr = &x; // Pointer ptr menunjuk ke alamat memori variabel x

    // Mengakses nilai variabel x melalui pointer
    std::cout << "Nilai x: " << *ptr << std::endl;

    // Mengubah nilai variabel x melalui pointer
    *ptr = 20;
    std::cout << "Nilai x setelah diubah: " << x << std::endl;

    return 0;
}
