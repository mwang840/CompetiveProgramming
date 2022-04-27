#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

//either return
int triple(){
    int count, numbersTotal = 0;
    cin >> numbersTotal;
    vector<int>numbersArray(numbersTotal);
    unordered_map<int, int>dynamically;
    for(int i = 0; i < numbersTotal; ++i){
        cin >> numbersArray[i];
    }
    for(int i = 0; i < numbersTotal; ++i){
        dynamically[numbersArray[i]]++;
        if(dynamically[numbersArray[i]] == 3){
            return numbersArray[i];
        }
    }
    return -1;
}

int main(void){
    int attempts;
    cin >> attempts;
    for(int i = 0; i < attempts; ++i){
        cout << triple()<<endl;
    }
    return 0;
}
