#include <iostream>
#include <ctime>
#include <cstdlib> 

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int die1 = std::rand() % 6 + 1;

    int die2 = std::rand() % 6 + 1;

    std::cout << "You rolled a pair of dice!" << std::endl;
    std::cout << "Die 1: " << die1 << std::endl;
    std::cout << "Die 2: " << die2 << std::endl;
    std::cout << "Total: " << die1 + die2 << std::endl;

    return 0;
}