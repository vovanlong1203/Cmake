#include <iostream>
#include  "TableTwo.h"

void printTableTwo(){
    for (int i = 1; i <= 10; i++) {
        std::cout << "2 * " << i << " = " << (2*i) << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}