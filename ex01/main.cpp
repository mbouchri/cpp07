#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(const T &value)
{
    std::cout << value << std::endl;
}

int main()
{
    int nbrs[] = {10, 20, 30, 40};
    std::string words[] = {"hello", "world", "*^^* !!"};

    std::cout << "------- INT ARRAY -------" << std::endl;
    iter(nbrs, 4, print<int>);

    std::cout << "------- STRING ARRAY -------" << std::endl;
    iter(words, 3, print<std::string>);

    return 0;
}