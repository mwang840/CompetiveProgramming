#include <iostream>
using namespace std;
#include <string>
#include <math.h>

//Returns a long long to make sure it
long long int twoLetterStrings(string twoLetters);


int main(){
    int testCase, i;
    string onlyLetters;
    cin >> testCase;
    while(i <= testCase){
        cin >> onlyLetters;
        cout << endl;
        cout << twoLetterStrings(onlyLetters)<<endl;
    }
    return 0;
}

long long int twoLetterStrings(string twoLetters){
    long long int combos = 0;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            if(twoLetters[i] < twoLetters[j]){
                combos++;
            }
        }
    }
    return combos;
}