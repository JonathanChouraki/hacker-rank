#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int N;
    int primarySum = 0;
    int secondarySum = 0;
    std::cin >> N;
    int matrix[N][N];
    for(int i = 0; i < N; i++){
       for(int j = 0; j < N; j++){
           std::cin >> matrix[i][j];
       }
    }
    for(int i = 0; i < N; i++){
        primarySum += matrix[i][i];
        secondarySum += matrix[i][N-1-i];
    }
    std::cout << std::abs(primarySum - secondarySum)  << std::endl;
}
