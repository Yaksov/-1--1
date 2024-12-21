#include <iostream>

int main() {
    int n;

    std::cout << "size: ";
    std::cin >> n;


    int* array = new int[n];

    std::cout << "enter elements" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "element " << i + 1 << ": ";
        std::cin >> array[i];
    }

    std::cout << "\nArray elements and their distance from the beginning:" << std::endl;
    int* start_address = array;
    for (int i = 0; i < n; ++i) {
        std::cout << "array[" << i << "] = " << array[i]
            << ", adress: " << &array[i]
            << ", distance from start: " << &array[i] - start_address + int(1) << " (in elements)" << std::endl;
    }

    delete[] array;

    return 0;
}
