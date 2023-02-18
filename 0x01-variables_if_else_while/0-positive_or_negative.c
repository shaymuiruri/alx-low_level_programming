#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int n = rand() % 201 - 100;  // n will be assigned a random integer between -100 and 100
    
    std::cout << n << std::endl;
    
    if (n > 0) {
        std::cout << "is positive" << std::endl;
    } else if (n == 0) {
        std::cout << "is zero" << std::endl;
    } else {
        std::cout << "is negative" << std::endl;
    }
    
    return 0;
}

