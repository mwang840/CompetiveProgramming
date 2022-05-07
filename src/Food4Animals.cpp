#include <iostream>
using namespace std;
#include <string>

string foodForAnimals(int dogFood, int catFood, int universalFood, int dogs, int cats);

int main(){
    int testCases, dogFood, catFood, universalFood, dogs, cats, trials;
    trials = 0;
    cin >> testCases;
    while(trials <= testCases){
        cin>> dogFood >> catFood >> universalFood >> dogs >> cats;
        cout << foodForAnimals(dogFood, catFood, universalFood, dogs, cats);
        trials++;
    }
    return 0;
}

string foodForAnimals(int dogFood, int catFood, int universalFood, int dogs, int cats){
    int totalPets = dogs + cats;
    int trackingFood = dogFood + catFood + universalFood;
    if(trackingFood >= totalPets){
        return "YES";
    }
    else {
        return "NO";
    }
}