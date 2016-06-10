#include <iostream>
#include <cmath>

int main(){
    int N;
    int primarySum = 0;
    int secondarySum = 0;
    int value = 0;
    std::cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            std::cin >> value;
            if(i == j){
                primarySum += value;
            }
            if(i == (N-1-j)){
                secondarySum += value;
            }
        }
    }
    std::cout << std::abs(primarySum - secondarySum)  << std::endl;
}
