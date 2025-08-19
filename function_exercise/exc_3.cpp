#include <iostream>

using namespace std;

// functions
// addition
double add(double a, double b)
{
    return a + b;
}
// subtraction
double substract(double a, double b)
{
    return a - b;
}
// multiplication
double multiplication(double a, double b)
{
    return a * b;
}
// division
double division(double a, double b)
{
    return a / b;
}
// greeting
void greeting()
{
    cout << "Hello!" << endl;
    cout << "Choose what you want to do:" << endl; 
}
void menu()
{
    cout << " 1 - to ADD two numbers" << endl;
    cout << " 2 - to SUBTRACT two numbers" << endl;
    cout << " 3 - to MULTIPLICATE two numbers" << endl;
    cout << " 4 - to DEVIDE two numbers" << endl;
}

// main, .exe function
int main()
{
    greeting();
    menu();


    
    return 0;
}