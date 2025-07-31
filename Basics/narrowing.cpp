#include <iostream>

using namespace std;

int main()
{
    short number = 100;
    int another{number}; //This is a branclet initialization while convertion from short to an int.

    cout << another;

    return 0;
}