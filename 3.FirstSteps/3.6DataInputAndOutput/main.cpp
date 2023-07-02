#include <iostream>
#include <string>

int main() {
    //Print data
    std::cout << "Hello, C++20" << std::endl;

    int age1 = 21;
    std::cout << "Age: " << age1 << std::endl;

    //Data input
    int age2;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;
    std::cin >> name;
    std::cin >> age2;

    std::cout << "Hello " << name << " you are " << age2 << " years old!" << std::endl;
    std::cin.ignore();

    //Data with spaces
    int age3;
    std::string full_name;

    std::cout << "Please type your full name and age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;
    
    return 0;
}