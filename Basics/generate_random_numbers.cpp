#include <iostream>
#include <cstdlib>  // include cstd file with rand() function
#include <ctime>    // include ctime file with time() function

using namespace std;

int main()
{
    long elapsedSeconds = time(nullptr);        // usege of time function with called nullptr (noll pointer) argument, counts seconds from Jan 1 1970
    srand(elapsedSeconds);             // seed rand function, random number generator with value of 5
    int number = rand() % 10;  // assignment of rand() function to an integer. Numbers generated can not be equal or more then 10

    cout << number;

    return 0;
}