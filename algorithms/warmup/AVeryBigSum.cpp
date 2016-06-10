#include <iostream>

int main(){
    int arraySize;
    long int sum = 0;

    std::cin >> arraySize;
    for(int i = 0; i < arraySize; i++){
        int value;
        std::cin >> value;
        sum += value;
    }
    std::cout << sum << std::endl;
}
