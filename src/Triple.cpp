#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

//either return
int triple(){
    int count, numbersTotal = 0;
    map<int, int> triples;
    cin >> numbersTotal;
    vector<int>numbersArray(numbersTotal);
    int *dynamically = new int[2 * 100000 + 1];
    for(int i = 0; i < numbersTotal; ++i){
        cin >> numbersArray[i];
    }
    for(int i = 0; i < 2 * 100000 + 1; ++i){
        dynamically[i] = 0;
    }

    for(int i : numbersArray){
        dynamically[i]++;
    }
    for(int i = 0; i < numbersArray.size(); ++i){
        if(dynamically[numbersArray[i]] >= 3){
            return numbersArray[i];
        }
    }
    return -1;
}

int main(void){
    int attempts;
    cin >> attempts;
    map<int, int> triples;
    triples.insert(pair<int, int> (attempts, triple()));
    return 0;
}
