#include <iostream>
#include <vector>
#include <string>
using namespace std;

int transFormNum(int x, int y){
    int transformed;
    int a = 1;
    int b = y/x;
    while(x != y){
        for(int i = 0; i < a; ++i){
            x = b * x;
        }
    }
    if(x == y){
        transformed = x;
    }
    return transformed;
}



int main(){
    int input, x, y, a, b;
    cin >> input;
    for(int i = 0; i < input; ++i){
        cin >> x, y, a, b;
        cout<< transFormNum(x, y);
    }
    return 0;
}