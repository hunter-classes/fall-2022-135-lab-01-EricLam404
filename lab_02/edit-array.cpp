#include <iostream>

int main()
{   
    int myData[10];

    for(int i = 0; i < 10; i++){
        myData[i] = 1;
    }

    int index, value;

    do {
        for(int i = 0; i < 10; i++){
             std::cout << myData[i] << " ";
        }

        std::cout << "\n\nInput index: \n";
        std::cin >> index;

        std::cout << "Input value: \n";
        std::cin >> value; 

        if(index >= 0 && index < 10){
            myData[index] = value;
        }


    } while(index >= 0 && index < 10);

    std::cout << "Index out of range. Exit \n";
    return 0;
}
