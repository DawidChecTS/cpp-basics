#include <iostream>

using namespace std;

string displayQuestion()
{
    string userInput;
    cout << "Welcome in the calculator!" << endl;
    cout << "Choose an action from the menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Devide" << endl;
    cout << "4. Multiply" << endl;
    cout << "5. Exit" << endl;
    cin >> userInput;

    return userInput;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error, you can no devide by 0!";
        return 0;
    }
    else {
        return a / b;
    }
}

int multiply(int a, int b)
{
    return a * b;
}


void displayResult(int a, int b, int product, const string& operation)
{
    cout << "The result of " << a << " " << operation << " " << b << " is: " << product << endl;
}


int main()
{
    while(true)
    {
        string userInput = displayQuestion(); // capture the returned input

        if (userInput == "1")
        {
            int userNumberA, userNumberB;
        
            cout << "Give me the first number and I will store it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will add it to the first one: " << endl;
            cin >> userNumberB;
        
            int result = add(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "+");
        }

        else if (userInput == "2")
        {
            int userNumberA, userNumberB;
        
            cout << "Give me the first number and I will store it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will subtract it from the first one: " << endl;
            cin >> userNumberB;
        
            int result = subtract(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "-");
        }

        else if (userInput == "3")
        {
            int userNumberA, userNumberB;
        
            cout << "Enter number to divide: " << endl;
            cin >> userNumberA;
        
            cout << "Enter number to divide: " << endl;
            cin >> userNumberB;
        
            int result = divide(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "/");
        }

        else if (userInput == "4")
        {
            int userNumberA, userNumberB;
        
            cout << "Give me the first number and I will multiply it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will multiply it with the first one: " << endl;
            cin >> userNumberB;
        
            int result = multiply(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "*");
        }

        else if (userInput == "5")
        {
            cout << "You choose to exit!" << endl;
            break;
        }
    }

    return 0;
}
