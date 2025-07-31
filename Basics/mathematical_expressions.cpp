#include <iostream>

int main()
{
    double a = 10;    // We can not get a decimal result if both a and c are of type integer. 
    int b = 3;        // We declare double just to bu sure that the result will be a decimal
    double c = a / b; // We are taking for exemple division since it works different then other languages
    std::cout << c; 

    return 0;
}
