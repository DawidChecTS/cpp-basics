#include <iostream> 
#include <string>
using namespace std;

int main()
{
    string userInput;

    cout << "Enter a meaning: ";
    getline(cin, userInput); // use getline function to capture entire meaning.
    cout << "You have typed in: "<< userInput << ", here.";
}