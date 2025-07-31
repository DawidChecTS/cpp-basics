#include <iostream>
#include <cmath>

using namespace std;

// function that takes in radius of the circle and returnes its area. 
int main()
{
    double radius;
    double pi = 3.14;

    cout << "Enter the radius of the circle and I will count out its area: ";
    cin >> radius; 

    double area = pi * (pow(radius, 2)); // using pow method included cfrom cmath library
    cout << "$ Area of the cicrle is: " << area ;
    return 0;
}