#include <iostream>
#include  "TableThree.h"

void printTableThree(){
    for (int i = 1; i <= 10; i++) {
        std::cout << "3 * " << i << " = " << (3*i) << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}