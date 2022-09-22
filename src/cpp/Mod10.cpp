#include <iostream>
using namespace std;

string mod10Arr(int *arr, int length);
bool checkArr(int *arr, int length);

int main(){
    int testCases, length = 0;
    cin >> testCases;
    cout << "\n";
    for(int i = 0; i < testCases; ++i){
        cin >> length;
        int *newArray = new int[length];
        for(int i = 0; i < length; ++i){
            cin >> newArray[i];
        }
        cout <<"\n";
        cout << mod10Arr(newArray, length);
    }
    return 0;
}


string mod10Arr(int *arr, int length){
    int copiedlen = length;
    int *modded10 = new int(length);
    bool amIequal = false;
    int temp = 0;
    for(int i = 0; i < length; ++i){
        modded10[i] = arr[i] + (arr[i] % 10); 
    }
    amIequal = checkArr(modded10, copiedlen);

    if(amIequal == false){
        return "NO";
    }
    else{
        return "YES";
    }
}

bool checkArr(int *arr, int length){
    int first = arr[0];
    for(int i = 1; i < length; ++i){
        if(arr[i] == first){
            return true;
        }
    }
    return false;
}
