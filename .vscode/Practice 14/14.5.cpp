#include <iostream>
#include <vector>
using namespace std;


int main()
{

    bool bubbleStrach[12][12];
    string bubbleStrach_X_O[12][12]; // пытался так же через char все равно указывал 1.

    for (int i=0; i!= sizeof bubbleStrach / sizeof bubbleStrach[0];i++ ){
        for (int k=0; k!= sizeof bubbleStrach / sizeof bubbleStrach[0];k++){

            bubbleStrach[i][k]= true;
            bubbleStrach_X_O[i][k] = "X";
            cout << bubbleStrach [i][k] << " ";
        }
        cout<< "\n";
    }

    

}