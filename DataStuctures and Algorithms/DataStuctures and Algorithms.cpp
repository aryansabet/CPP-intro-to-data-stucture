

#include <iostream>
#include "Array.h"
#include <cassert>

int main()
{
    using std::cout;

    //Array a{};
    //assert(a.IsEmpty());

    //Array b{ 10 };
    //assert(!b.IsEmpty());
    //ASan
    //address sanitizer
    //clang++ -std=c++14 -fsanitize=address -g -o1 Array1.cpp
    //to spot the memory leak bug

    Array a{ 3 };
    a[0] = 10;
    cout << a[0];

}


