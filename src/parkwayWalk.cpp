#include <iostream>
#include <vector>
using namespace std;

int parkwayWalk(int m, int n);


int main(){
    int testCases, one, two;
    cin >> testCases;
    cout <<"\n";
    for(int i = 0; i < testCases; ++i){
        cin >> one >> two;
        cout << parkwayWalk(one, two);
    }
    return 0;
}


int parkwayWalk(int m, int n){
    vector<int>theBench(n);
    int distance = 0;
    for(int i : theBench){
        distance++;
    }
    return max(distance - m, 0);
}