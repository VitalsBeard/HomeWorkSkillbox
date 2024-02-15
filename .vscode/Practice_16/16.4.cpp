#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

enum Note
{
    DO = 1, 
    RE = 2, 
    MI = 4, 
    FA = 8, 
    SOL = 16, 
    LA = 32, 
    SI = 64 
};


void playing (vector <int> melody){
    
    for (int i = 0 ; i !=melody.size(); i++){
        if (melody[i]==Note::1){
            cout << "DO ";
        }else if (melody[i]==Note::2){
            cout << "RE ";
        }else if ()    
    }

}

int main(){
    int note;
    int melody[3];
    
    cout << "Please input the numbers of melody";
    cin >> note;
    melody [0] = note % 100;
    melody [1] = (note % 10 - melody[0]) / 10;  
    melody [2] = (note  - melody[0] - melody[1]) / 100;
    
    playing(melody);
}