#include <iostream>
#include <math.h>

int main()
{   
    int num;

    std::cout << "Please enter an integer: \n";
    std::cin >> num;

    while(num <= 0 || num >= 100){
        std::cout << "Please re-enter: \n";
        std::cin >> num;
    }
    std::cout << "Number squared is " << pow(num, 2) <<"\n";

    return 0;
}
