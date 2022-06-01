#include <iostream>
using namespace std;

int BeatTheOdds(int numbers[]);

int main(){
    cout << "hi\n";
}

int BeatTheOdds(int numbers[]){
    int i = 0;
    int countOfEvenSum = 0;
    for(; i < sizeof(numbers); ++i){
        if(numbers[i] % 2 == 1){
            numbers[i] = numbers[i-1];
        }
    }
    return countOfEvenSum;
}