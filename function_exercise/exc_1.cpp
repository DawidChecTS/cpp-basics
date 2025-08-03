#include <iostream>

using namespace std;

bool isUserInputValid(const string& input)
{
    if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5")
    {
        return true;
    }
    else
    {
        return false;
    }
}

string displayQuestion() // function that displays menu
{

    string userInput; // declaration of userInput string
    while (true)      // loops until the valid input is typed in
        {
        cout << "Welcome in the Calculator App!" << endl;
        cout << "Choose an option from the menu:" << endl;
        cout << "" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Divide" << endl;
        cout << "4. Multiply" << endl;
        cout << "5. Exit" << endl;
        cin >> userInput; // puts the answer into the string

        if (isUserInputValid(userInput))
            return userInput;

        else 
        {
            cout << "Invalid Input! Try again!" << endl;
            cout << "" << endl;
        }
}
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error, you can no divide by 0!";
        cout << "" << endl;
        return 0;
    }
    else {
        return a / b;
    }
}

double multiply(double a, double b)
{
    return a * b;
}


void displayResult(double a, double b, double product, const string& operation) // Displays the result of a calculation using the given numbers, result, and operation symbol.
                                                                       // 'operation' is passed as a const string reference for efficiency and safety..
{
    cout << "The result of " << a << " " << operation << " " << b << " is: " << product << endl;
    cout << "" << endl;
}


int main()
{
    while(true)
    {
        string userInput = displayQuestion(); // capture the returned input

        if (userInput == "1")
        {
            double userNumberA, userNumberB;
        
            cout << "Give me the first number and I will store it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will add it to the first one: " << endl;
            cin >> userNumberB;
        
            double result = add(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "+");
        }

        else if (userInput == "2")
        {
            double userNumberA, userNumberB;
        
            cout << "Give me the first number and I will store it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will subtract it from the first one: " << endl;
            cin >> userNumberB;
        
            double result = subtract(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "-");
        }

        else if (userInput == "3")
        {
            double userNumberA, userNumberB;
        
            cout << "Enter number to divide: " << endl;
            cin >> userNumberA;
        
            cout << "Enter number to divide: " << endl;
            cin >> userNumberB;
        
            double result = divide(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "/");
        }

        else if (userInput == "4")
        {
            double userNumberA, userNumberB;
        
            cout << "Give me the first number and I will multiply it: " << endl;
            cin >> userNumberA;
        
            cout << "Give me the second number and I will multiply it with the first one: " << endl;
            cin >> userNumberB;
        
            double result = multiply(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "*");
        }

        else if (userInput == "5")
        {
            cout << "You chose to exit!" << endl;
            cout << "" << endl;
            break;
        }
    }

    return 0;
}
