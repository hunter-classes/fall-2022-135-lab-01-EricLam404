/**
    @file leap.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    if(year % 4 != 0){
        cout << "Common year \n";
    } 
    else if(year % 100 != 0){
        cout << "Leap year \n";
    }
    else if(year % 400 != 0){
        cout << "Common year \n";
    }
    else {
        cout << "Leap year \n";
    }

    return 0;
}