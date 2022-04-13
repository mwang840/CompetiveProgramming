#include <iostream>
#include <vector>
#include <string>
using namespace std;

string uniformString(int t, int k);

//a = n/k times we need to get a least a frequency of char
//first k char of the alphabet at least once
//has a total of n length

int main(void){
    int testCases, num, num2;
    cin >> testCases >> num >> num2;
    for(int i = 0; i < testCases; ++i){
        cout << uniformString(num, num2);
    }
    return 0;
}

string uniformString(int t, int k){
    vector<char> alphabets = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    bool flag = false;
    string uniform = "";
    int minTimes = t/k;
    char temp = 'a';
    for(int i = 1; i <= t; ++i){
        if(i % minTimes == 0){
            temp+=1;
        }
        uniform += temp;
    }

    return uniform;
}