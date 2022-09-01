/**
    @file smaller.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>

int main()
{
    int first, second;
    std::cout << "Enter the first number: \n";
    std::cin >> first;

    std::cout << "Enter the seecond number: \n";
    std::cin >> second;

    if(first > second){
        std::cout << "The smaller of the two is " << second << "\n";
    }
    else{
        std::cout << "The smaller of the two is " << first << "\n";
    }

    return 0;
}