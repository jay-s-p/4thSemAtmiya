#ifndef GETSET_H
#define GETSET_H
#include <iostream>
int getInt(int& a)
{
    std::cout << "Enter value : ";
    std::cin >> a;
}

#endif