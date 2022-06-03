#include <iostream>
using namespace std;
#include <string>
#include <math.h>

//Returns a long long to make sure it
long long int twoLetterStrings(string twoLetters);


int main(){
    int testCase, i, j, k;
    i = 0;
    k = 0;
    string onlyLetters;
    cin >> testCase;
    while(i <= testCase){
        cin >> j;
        //for(int i; i )
        while(k <= j){
            cin >> onlyLetters;
            cout << endl;
            k++;
        }
        
        cout << twoLetterStrings(onlyLetters)<<endl;
        i++;
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