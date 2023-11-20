#include <iostream>
#include "TableFive.h"

void printTableFive(){
    for (int i = 1; i <= 10; i++) {
        std::cout << "5 * " << i << " = " << (5*i) << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}