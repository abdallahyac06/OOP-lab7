#include <iostream>
#include <algorithm>

int main() {
    int size;
    std::cout << "Enter the size of the array" << std::endl;
    std::cin >> size;
    float *array = new float[size];
    
    std::cout << "Enter the floating-point values" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    std::sort(array, array + size);

    std::cout << "Sorted array of floats" << std::endl;
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << *(array + i) << ' ';
    }
    std::cout << ']' << std::endl;
    
    delete[] array;
    array = nullptr;
    return 0;
}