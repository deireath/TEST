#include <iostream>
#include <cmath>

int main (){
    int month;
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It's January";
            break;
        case 2:
            std::cout << "It's February";
            break;
        case 3:
            std::cout << "It's March";
            break;
    }
2
    return 0;
}