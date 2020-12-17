//
// Created by iuxda on 12/8/2020.
//
#include <iostream>

int main(void) {
    int num;

    while (1) {
        std::cout<<"sales amount: ";
        std::cin>>num;

        if (num == -1) {
            break;
        }

        std::cout<<"this month salary: "<<50+num*0.12<<std::endl;
    }

    return 0;
}

