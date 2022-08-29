/**
    @file smaller.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter the first number: \n";
    cin >> first;

    cout << "Enter the seecond number: \n";
    cin >> second;

    if(first > second){
        cout << "The smaller of the two is " << second << "\n";
    }
    else{
        cout << "The smaller of the two is " << first << "\n";
    }

    return 0;
}