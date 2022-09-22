#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    return 0;
}

string rain(int rainyDays, int maxRainfall, int position, int intensity){
    string rained = "";
    int accumulate = 0;
    accumulate+= max(0,intensity - abs(position));
    if(accumulate > maxRainfall){
        rained += "1";
    }
    return rained;
}
