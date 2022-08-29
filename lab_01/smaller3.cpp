/**
    @file smaller3.cpp
    @author Eric Lam
    @date 8/27/2022
*/

#include <iostream>
using namespace std;

int findSmaller(int first, int second)
{
    if(first > second){
        return second;
    }
    else{
        return first;
    }
}

int main()
{
    int first, second, third;

    cout << "Enter the first number: \n";
    cin >> first;

    cout << "Enter the seecond number: \n";
    cin >> second;

    cout << "Enter the third number: \n";
    cin >> third;

    cout << "The smaller of the two is " << findSmaller(findSmaller(first, second), third) << "\n";

    return 0;
}