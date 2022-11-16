#include <iostream>
#include "Triangle.h"

enum actions
{
    perimeter,square,heights,TriangleTypeA,TriangleTypeS,end
};

int main()
{
    Triangle Q;
    std::cout << std::endl;
    std::cout << Q;
    bool stop = false;
    int choice = 0;
    std::cin >> Q;
    std::cout << " 0 - perimeter  1 - square  2 - heights  3 - TriangleTypeA  4 - TriangleTypeS  5 - end  " << std::endl;
    while (!stop) {
        std::cout << " Select action : ";
        std::cin >> choice;
        switch (choice) {
        case actions::perimeter:
            std::cout << Q.perimeter() << std::endl;
            break;
        case actions::square:
            std::cout << Q.square() << std::endl;
            break;
        case actions::heights:
            Q.heights();
            break;
        case actions::TriangleTypeA:
            Q.TriangleTypeA();
            break;
        case actions::TriangleTypeS:
            Q.TriangleTypeS();
            break;
        case actions::end:
            std::cout << "bye!";
            stop = true;
            break;
        }
    }
}

