#include <iostream>
#include <vector>
#include <string>
using namespace std;


string oddOrEven(int arr[]);


int main(void){
    int testCases, arrLength, numbers;
    cin >> testCases, arrLength;
    int testingArray[0] = {};
    for(int i = 0; i < arrLength; ++i){
        cin >> numbers;
        testingArray[i] = numbers;
        cout << oddOrEven(testingArray[arrLength]);
    }
    return 0;
}


string oddOrEven(int arr[]){
    int countEven = 0;
    int countOdd = 0;

    for(int i = 0; i < sizeof(arr); ++i){
        if(arr[i] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }

    if(countOdd < countEven){
        addEven(arr);
    }
    else if(countOdd > countEven){
        addOdd(arr);
    }
}


int *addOdd(int arr[]){
    int newArr[sizeof(arr)];
    int *holderArr = newArr;
    for(int i = 0; i < sizeof(arr); ++i){
        if(arr[i] % 2 == 0){
            holderArr[i] = arr[i] + 1;
        }
    }
    return holderArr;
}

int *addEven(int arr[]){
    int newArr[sizeof(arr)];
    int *holderArr = newArr;
    for(int i = 0; i < sizeof(arr); ++i){
        if(arr[i] % 2 == 1){
            holderArr[i] = arr[i] + 1;
        }
    }
    return holderArr;
}
