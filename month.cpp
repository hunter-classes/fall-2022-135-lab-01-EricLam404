/**
    @file month.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>

bool isLeap(int year){
    if(year % 4 != 0){
        return false;
    } 
    else if(year % 100 != 0){
        return true;
    }
    else if(year % 400 != 0){
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    int year, month;

    std::cout << "Enter year: \n";
    std::cin >> year;

    std::cout << "Enter month: \n";
    std::cin >> month;

    if(month <= 7 && month % 2 == 1){
        std::cout << "31 Days \n";
    } 
    else if(month >= 8 && month <= 12 && month % 2 == 0){
        std::cout << "31 Days \n";
    }
    else if(month != 2){
        std::cout << "30 Days \n";
    }
    else if(isLeap(year)){
        std::cout << "29 Days \n";
    }
    else {
        std::cout << "28 Days \n";
    }
    return 0;
}