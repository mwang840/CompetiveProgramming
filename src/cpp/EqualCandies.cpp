#include <iostream>
#include <vector>
#include <climits>
int main(){
    int testCases, candies = 0;
    int sum = 0;
    std::cin >> testCases;
    std::vector<int>value;
    int minimum = INT_MAX;
    for(int i = 0; i < testCases; ++i){
        std::cin >> candies;
        if(candies < minimum){
            minimum = candies;
            value.push_back(minimum);
        }
    }
    for(int j = 0; j < value.size(); j++){
        value[j] = value[j] - minimum;
        sum+= value[j];
    }
    std::cout<< "Sum is " << sum << "\n";

    return 0;
}
