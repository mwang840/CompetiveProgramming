#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

const int Modulo = pow(10, 9) + 7;

int main(){
    cout <<"Hello\n";
    return 0;
}

int *permutation(int len, int *arr){
    int count, countArr = 0;
    const int *last = &arr[len];
    int possibilities = 0;
    int *copyArr = new int(len);
    int *perm = new int(len);
    for(int i = 0; i < len; ++i){
        copyArr[i] = (arr)[i];
    }
    delete arr;


    while(count < len){
        if(copyArr[count % Modulo] != len){
            perm[count] = (copyArr)[count];
        }
        count++;
    }

    return perm;
}