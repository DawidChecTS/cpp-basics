#include <iostream>

int main()
{   
    int choice = 0;

    std::cout<< "Enter Choise 1, 2 or 3: ";
    std::cin>>choice;

    switch(choice)
    {
        case 1:
            std::cout<< "You have entered 1!";
            break;
        case 2:
            std::cout<< "You have entered 2!";
            break;
        case 3:
            std::cout<< "You have entered 3!";
            break;
        default:
        std::cout << "Wrong data entered!";
    }
}