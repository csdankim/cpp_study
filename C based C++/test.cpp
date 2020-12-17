//
// Created by iuxda on 12/9/2020.
//

#include <iostream>

int SimpleFunc(int a=10) {
    return a+1;
}

int SimpleFunc(void) {
    return 10;
}

int main() {
    SimpleFunc(10);
    SimpleFunc();
}