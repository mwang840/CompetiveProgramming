#include <iostream>
#include <map>
int main(){
    int howMany = 0;
    int number;
    std::cin >> howMany;
    std::map<int, int> arr;
    int holder = howMany + 1;
    for(int i = 0; i < howMany - 1; ++i){
        std::cin >> number;
        arr.insert({number , 1});
    } 
    for(int i = 1; i < number; i++){
        if(!arr.count(i)){
            std::cout << i <<"\n";
        }
    }
    return 0;
}