#include <iostream>

int main()
{   
    int number = 0;

    std::cout<<"Enter a number: ";
    std::cin>>number; 

    switch(number)
    {
        case 1:
            std::cout<<"You have typed in 10!";
            break;

        default:
        std::cout<<"WTF";


    }
}