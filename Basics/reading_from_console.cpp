#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a temperature in Farenheit, I will convert it to Celsius: ";
    double Farenheit;
    cin >> Farenheit;   //  >>, extration operator is the opposite from insertion operator, here we are reading output from the console and puting it to this variable
    double coverterdTemperatureToCelsius = (Farenheit - 32) * 0.5556;
    cout << coverterdTemperatureToCelsius;

    return 0;
}