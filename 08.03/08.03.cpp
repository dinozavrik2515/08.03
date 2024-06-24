#include <Windows.h>
#include <iostream>
#include <cmath>


inline int Sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 3, b = 9;
    std::cout << Sum(a, b);
    
    return 0;
}


