#include <iostream>

int main()
{   
    int L, U;

    std::cout << "Please enter L \n";
    std::cin >> L;

    std::cout << "Please enter U \n";
    std::cin >> U;

    for(int i = L; i < U; i++){
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
