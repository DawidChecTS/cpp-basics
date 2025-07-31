#include <iostream>

using namespace std;

int main()
{
    double price = 99.99;
    float intrestRate = 3.67F; // if F no added, compiler will treat this as a double
    long fileSize = 90000L;    // if L no added, compiler will treat this as an int
    char letter = 'a';
    bool isValid = false;


    // using auto keyword
    auto newPrice = 99.99;
    auto newIntrestRate = 3.67F; // if F no added, compiler will treat this as a double
    auto newFileSize = 90000L;    // if L no added, compiler will treat this as an int0
    auto newLetter = 'a';
    auto newIsValid = false;


    return 0;
}