#include <iostream>
#include  "TableFour.h"

void printTableFour(){
    for (int i = 1; i <= 10; i++) {
        std::cout << "4 * " << i << " = " << (4*i) << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}