#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter the first number: " << endl;
    cin >> first;

    cout << "Enter the seecond number: " << endl;
    cin >> second;

    if(first > second){
        cout << "The smaller of the two is " << second << endl;
    }
    else{
        cout << "The smaller of the two is " << first << endl;
    }

    return 0;
}