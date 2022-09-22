using namespace std;
#include <string>
#include <iostream>
#include <vector>

string circleGame(int stones, vector<int>pile);

int main(){
    return 0;
}

string circleGame(int stones, vector<int>pile){
    int track, p1score, p2score = 0;
    for(track; track < pile.size(); track++){
        while(!pile.empty()){
            pile.erase(pile.begin(), pile.begin() + stones);
        }
        cout << "You lose";
    }

    return "Mike";
}