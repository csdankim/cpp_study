//
// Created by iuxda on 12/8/2020.
//

#include <iostream>

int main(void) {
    int num;

    std::cout<<"input num: ";
    std::cin>>num;

    for(int i=1; i<10; i++) {
       std::cout<<num<<" x "<<i<<" = "<<num*i<<std::endl;
    }

    return 0;
}
