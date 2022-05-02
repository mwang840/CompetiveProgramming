#include <iostream>
#include <vector>
#include <string>
using namespace std;

int transFormNum(int x, int y, int a, int b){
    int transformed;
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
        cout<< transFormNum(x, y, a, b);
    }
    return 0;
}