#include <iostream>

int main() {
    int input;
    std::cout << "Give an interger: ";
    std::cin >> input;
    
    for (int i = 0; i < input; i++)
    {
        std::cout << i << std::endl;
    }

    const char* names[] = {"Lena", "Rain", "Dale"};
    for (auto name : names)
    {
        std::cout << name << std::endl;
    }
    
    std::cin.get();
}