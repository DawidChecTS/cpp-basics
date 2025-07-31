#include <iostream>

int main() 
{
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it (READ-ONLY)

     const double PI = 3.14159;
     double radius = 10;
     double multiplyWithTwo = 2;
     double circumference = multiplyWithTwo * PI * radius;

     std::cout << "The circles circumference is: " << circumference << '\n';
    return 0;
}







