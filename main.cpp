#include <iostream>
#include <string>

#include<cstdio>

//functiona 
auto compute_addition(int number1, int number2) -> int {return number1 + number2;}
auto compute_subtration(int number1, int number2) -> int {return number1 - number2;}
auto compute_power(int number1, int number2) -> int {return number1 * number2;}
auto compute_remainder(int number1, int number2) -> int {return number1 % number2;}

int main()
{
        int number1{};
        int number2{};
        std::cout << "Enter the two numbers: " << std::endl;
        std::cin>> number1;
        std::cin>> number2;
        const auto result = compute_remainder(number1,number2);
        std::cout << "Number= " << result;
}
