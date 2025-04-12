#include <iostream>
#include <list>

int main() {
    std::list<int> list;
    int input;

    std::cout << "Enter integers (-1 to stop)" << std::endl;

    while (input != -1) {
        std::cin >> input;
        list.push_back(input);
    }
    list.pop_back();

    auto left = list.begin();
    auto right = list.end();
    if (!(left == right-- || left == right)) {
        do {
            std::swap(*left, *right);
        } while (++left != right && left != --right);
    }

    std::cout << "Reversed list" << std::endl;
    std::cout << '[';
    for (int i: list) {
        std::cout << ' ' << i << ' ';
    }
    std::cout << ']' << std::endl;

    return 0;
}