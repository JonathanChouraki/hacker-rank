#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int V;
    int n;
    std::vector<int> ar;
    int value;

    std::cin >> V;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> value;
        ar.push_back(value);
    }

    std::vector<int>::iterator it = std::find(ar.begin(), ar.end(), V);
    int pos = it - ar.begin();
    std::cout << pos << std::endl;
}
