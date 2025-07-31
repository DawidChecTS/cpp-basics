#include <iostream>
using namespace std;

// void evalueteIfNumberIsOddOrEven();
// void evalueteIfNumberIsPositiveNegativeOrZero();
// void maxOfTwoNumbers();
void passOrFail();

int main()
{
    passOrFail();   

    return 0;
}

    void evalueteIfNumberIsOddOrEven()
    {
        int userInput;

        cout << "Enter a number and I will tell if oy if it is odd or even: ";
        cin >> userInput;

        if (userInput % 2 != 0) // calculates the remainder when the number is divided by 2
        {
            cout << userInput<< " - number is odd!" << endl;
        }
        else
        {
            cout << userInput<< " - number is even!" << endl;
        }
    }

    void evalueteIfNumberIsPositiveNegativeOrZero()
    {
        int userInput;

        cout << "Enter yor number and I will tell if the number is positive, negative or zero." << endl;
        cin >> userInput;

        if(userInput > 0)
        {
            cout << "Your number: " << userInput << " is positive." << endl;
        }
        else if(userInput == 0)
        {
            cout << "Your number: " << userInput << " is zero." << endl;
        } 
        else
        {
            cout << "Your number: " << userInput << " is negative." << endl;
        }
    }

    void maxOfTwoNumbers()
    {
        int userInputOne;
        int userInputTwo;

        cout << "Enter yor number and I will tell you what number is bigger." << endl;
        cout << "Enter yor first number." << endl;
        cin >> userInputOne;
        cout << "Enter yor second number." << endl;
        cin >> userInputTwo;

        if(userInputOne > userInputTwo)
        {
            cout << "Your first number: " << userInputOne << " is bigger then " << userInputTwo << endl;
        }
        else if(userInputOne < userInputTwo)
        {
            cout << "Your second number: " << userInputTwo << " is bigger then " << userInputOne << endl;
        } 
        else
        {
            cout << "Both numbers numbers: " << userInputOne << " and " << userInputTwo << "are equal" << endl;
        }

    }

    void passOrFail()
    {
        int userInput;

        cout << "Type in a number from 0 to 100: " << endl;
        cin >> userInput;

        if(userInput == 50 || userInput <= 50)
        {
            cout << "The number you typed in: " << userInput << " is lower than 50 or equal, you have failed!" << endl;
        }
        else if (userInput > 50 && userInput < 101) 
        {
            cout << "The number you typed in: " << userInput << " is above 50 but not bigger than 100, you have passed!" << endl;
        }
        else
        {
            cout << "Wrong input. please type in something that matches the instructions!" << endl;
        }
    }
