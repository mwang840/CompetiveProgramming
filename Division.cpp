#include <iostream>
#include <vector>
#include <string>
using namespace std;

string Division(int number);


int main(){
    int testCase , number;
    cin >> testCase;
    for (int i = 0; i < testCase; ++i){
        cin >> number;
        cout<< Division(number)<<endl;
    }
    
    return 0;
}

string Division(int number){
    if(number <= 1399){
        return "Division 4";
    }
    else if(1400<=number<=1599){
        return "Division 3";
    }
    else if(1600<= number <= 1899){
        return "Division 2";
    }
    else if(1900 <= number){
        return "Division 1";
    }
}