#include <iostream>

namespace first {
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    // Namespace = provides a solution preventing name conflicts in large projects,
    // Each entity needs a uniqe name. A namespace allows for identically named entities
    // as long as the namespaces are different

    int x = 0;

    std::cout << "In the first namespace the x is: " << first::x << '\n';
    std::cout << "In the second namespace the x is: " << second::x <<'\n';
    std::cout << "In the main function the x is: " << x << '\n';


    return 0;
}