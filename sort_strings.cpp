#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> vector;
    std::string input;
    
    std::cout << "Enter words (0 to stop)" << std::endl;
    std::cin >> input;
    while (input != "0") {
        vector.push_back(input);
        std::cin >> input;
    }

    std::sort(vector.begin(), vector.end());
    
    std::cout << "Sorted array of words" << std::endl;
    std::cout << "[ ";
    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i] << ' ';
    }
    std::cout << ']' << std::endl;

    return 0;
}