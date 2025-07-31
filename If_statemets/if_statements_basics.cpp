#include <iostream>
#include <string>
using namespace std;


int main()
{
    int x;
    cin >> x;

    if(x >= 1 && x <= 10) //condition, evaluets if is true or false
    {  
        cout << "x is bigger then 1 and equal and smaller than 10!" << endl;
        if(x < 5)
        {
            cout << "x is also smaller then 5!" << endl;
        }
    } 

    else if (x >=11 && x < 20 )
    {
        cout << "x is equal or bigger then 11 and smaller then 20!" << endl;
    }

    else
    {        // if if statements condition is false, the else will run. this is not mandatory.
        cout << "The number is equal or bigger than 20!" << endl;
    }
}