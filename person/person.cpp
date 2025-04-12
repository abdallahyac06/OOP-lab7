#include <iostream>
#include <set>

class Person {
    public:
        std::string name;
        int age;
        Person(std::string name, int age): name(name), age(age) {}
};

class CompPerson {
    public:
        bool operator()(const Person& p1, const Person& p2) const {
            return p1.name < p2.name;
        }
};

int main() {
    std::multiset<Person, CompPerson> multiset = {
        Person("Rayen", 17),
        Person("Abdallah", 18),
        Person("Abdallah", 20),
        Person("Sami", 18),
        Person("Oussama", 18)
    };

    std::cout << "Sorted multiset of persons" << std::endl;
    for (Person person: multiset) {
        std::cout << person.name << ' ' << person.age << std::endl;
    }

    return 0;
}