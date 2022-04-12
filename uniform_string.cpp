#include <iostream>
#include <vector>
using namespace std;

string uniformString(int t, int k);

int main(void){
    return 0;
}

string uniformString(int t, int k){
    vector<string> alphabets = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"];
    
    int freQuency = 0;
    string uniform = "";

    for(int i = 0; i < t; ++i){
        for(int j = 0; j < k; ++j){
            if(alphabets[i] == alphabets[k]){
                uniform[i] = alphabets[i];
            }
        }
    }

    return uniform;
}