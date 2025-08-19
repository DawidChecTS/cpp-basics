#include <iostream>

using namespace std;

// Excercise One
void greet(const std::string& name)
{
    cout << " Hello " << name << "!" << endl;
}

// Excercise Two

//Excercise Three
int addInt(int a, int b)
{
    return a + b;
}

double addDouble(double a, double b)
{
    return a + b;
}

// Excercise Four

int larger(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else {
        return a;
    }
}


int main()
{
    int a = 12;
    int b = 321;
    double c = 21.23;
    double d = 923.1;

    greet("Alice");
    greet("Bob");

    int resultInt = addInt(a,b);
    cout << resultInt << endl;

    double resultDouble = addDouble(c,d);
    cout << resultDouble << endl;

    int biggerInt = larger(343, 34);
    cout << biggerInt << endl;

    return 0;
}