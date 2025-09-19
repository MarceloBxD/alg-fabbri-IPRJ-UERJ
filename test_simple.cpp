#include "alg/sort-char/sort_char.h"
#include <iostream>
#include <cstring>

int main() {
    char test[] = "hello world";
    
    std::cout << "Original: \"" << test << "\"" << std::endl;
    sort_char(test);
    std::cout << "Sorted:   \"" << test << "\"" << std::endl;
    
    return 0;
}
