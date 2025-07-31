#include <iostream>

using namespace std; // if we are using namespace std, we dont have to use it again in all of the code.

int main()
{
    const double sales = 95000;
    cout << "Your sales are: " << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "Your state tax is: " << stateTax << endl;

    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "Your county tax is: " << countyTax << endl;

    const double totalTax = countyTax + stateTax;
    cout << "Total tax to pay is: " << totalTax << endl;

    return 0;
}