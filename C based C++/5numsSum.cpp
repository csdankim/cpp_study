#include <iostream>

int main() {
    int sum = 0;
    int num;

    for(int i=0; i<5; i++) {
        std::cout << "input num" << i + 1 << ": ";
        std::cin >> num;
        sum += num;
    }

    std::cout<<"Total: "<<sum<<std::endl;

    return 0;
}


