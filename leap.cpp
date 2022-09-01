/**
    @file leap.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>

int main()
{
    int year;

    std::cout << "Enter year: ";
    std::cin >> year;

    if(year % 4 != 0){
        std::cout << "Common year \n";
    } 
    else if(year % 100 != 0){
        std::cout << "Leap year \n";
    }
    else if(year % 400 != 0){
        std::cout << "Common year \n";
    }
    else {
        std::cout << "Leap year \n";
    }

    return 0;
}