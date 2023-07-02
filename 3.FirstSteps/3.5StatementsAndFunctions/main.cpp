#include <iostream>

int addNumbers(int first_num, int second_num) {
    int result = first_num + second_num;
    return result;
}

int main() {
    int first_num = 13;
    int second_num = 7;

    std::cout << "First number: " << first_num << std::endl;
    std::cout << "Second number: " << second_num << std::endl;
    
    int sum = first_num + second_num;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(30, 54);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(3, 42) << std::endl;

    return 0;
}