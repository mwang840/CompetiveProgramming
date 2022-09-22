#include <iostream>
#include <string>
#include <map>
using namespace std;

int dictionary(string letter);

int main(){
    int input;
    int index = 0;
    string twoLetterWords;
    cin >> input;
    while(index != input){
        cin >> twoLetterWords;
        cout << endl;
        cout << dictionary(twoLetterWords);
        index++;
    }
    return 0;
}

int dictionary(string letter){
    int index = 0;
    if(letter[0] != letter[1]){
        index = ((letter[0] - 'a') * 26) + (letter[1] - 'a');
        index -= letter[0] - 'a';
        if(letter[1] < letter[0]){
            index++;
        }
    }
        // 'b' - 'a' = 1
        // 'a' - 'a' = 0
        //'d' - 'a' = 3 
    return index;
}