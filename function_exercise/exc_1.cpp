#include <iostream>
#include <limits> // for cleaning errors

using namespace std;


bool isUserInputValid(const string& input) // checks if user input is an integer from 1-5
{
    if (input == "1" || 
        input == "2" || 
        input == "3" ||
        input == "4" ||
        input == "5")
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
            cout << "Error, division by zer is not allowed! \n" << endl;
            return numeric_limits<double>::quiet_NaN(); // Return a special value of type double that represents NaN - Not a Number
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

void takeInNumbers(double& a, double& b) // & is a reference that allows to change values passed into functions
    {
        cout << "Give me the first number and I will store it: " << endl;
        cin >> a;
        
        cout << "Give me the second number and I will add it to the first one: " << endl;
        cin >> b;
    }

int main()
{
    while(true)
    {
        string userInput = displayQuestion(); // capture the returned input

        double userNumberA, userNumberB;

        if (userInput == "1")
        {
            takeInNumbers(userNumberA, userNumberB); 
        
            double result = add(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "+");
        }

        else if (userInput == "2")
        {
            takeInNumbers(userNumberA, userNumberB); 
        
            double result = subtract(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "-");
        }

        else if (userInput == "3")
        {
            takeInNumbers(userNumberA, userNumberB); 
        
            double result = divide(userNumberA, userNumberB);
        
            displayResult(userNumberA, userNumberB, result, "/");
        }

        else if (userInput == "4")
        {
            takeInNumbers(userNumberA, userNumberB); 
        
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


// To do:
/*✅ 1. Reduce code duplication in main() using a helper function
You repeat the same input logic four times.

✅ 2. Improve division by zero logic
Return nothing when dividing by 0 instead of showing a wrong result.

✅ 3. Add more operations
For example: power (^), square root (√), modulo (%), etc.

✅ 4. Input validation for numbers
So the user can't crash your program by typing "abc".

✅ 5. Organize code into functions/files
Make your code cleaner with .cpp and .h files later.*/