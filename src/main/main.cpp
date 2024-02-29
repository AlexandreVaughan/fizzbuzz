#include <cstdlib>
#include <iostream>

#include "fizzbuzz.h"

int main(int argc, char** argv)
{
    for (int i = 1; i <= 100; ++i)
    {
        std::cout << fb::fizzbuzz(i) << std::endl;
    }

    return EXIT_SUCCESS;
}
