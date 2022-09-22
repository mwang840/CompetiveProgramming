#include <iostream>
#include <string>
using namespace std;

string isLucky(int sixDigits);

int main(){
    int testCases, sixDigits;
    cin >> testCases;
    cout << endl;
    for(int i = 0; i < testCases; ++i){
        cin >> sixDigits;
        cout << isLucky(sixDigits)<<endl;
    }
    return 0;
}

string isLucky(int sixDigits){
    int half = to_string(sixDigits).length() / 2;
    int full = 6;
    int sum1, sum2;
    int i = 0;
    while(i != half){
        sum1 += (int)to_string(sixDigits)[i];
        i++;
    }
    while(half != full){
        sum2 += (int)to_string(sixDigits)[half];
        half++;
    }
    if(sum1 == sum2){
        return "YES";
    }
    else{
        return "NO";
    }
}