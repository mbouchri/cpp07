#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    // Array<int> 
    Array<int> nbrs(3);

    nbrs[0] = 10;
    nbrs[1] = 20;
    nbrs[2] = 30;

    for (unsigned int i = 0; i < nbrs.size(); i++)
        std::cout << nbrs[i] << std::endl;

    std::cout << "\n===========================\n" << std::endl;
    
    // Array<string>
    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "World";
    words[2] = "!";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;

    return 0;
}