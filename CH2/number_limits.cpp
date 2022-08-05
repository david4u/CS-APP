#include <stdio.h>
#include <iostream>
#include <limits.h>

int main() {
    uint64_t a = __UINT64_MAX__ + 12; // Compute like kind of modular operation
    
    std::cout << a << '\n';
}