#include <iostream>
#include <vector>
using namespace std;


int main()
{

    bool bubbleStrach[12][12];
    char bubbleStrach_X_O[12][12]; // пытался так же через char все равно указывал 1.

    for (int i=0; i!= sizeof bubbleStrach / sizeof bubbleStrach[0];i++ ){
        for (int k=0; k!= sizeof bubbleStrach / sizeof bubbleStrach[0];k++){

            bubbleStrach[i][k]= true;
            bubbleStrach_X_O[i][k] = 'X';
            cout << bubbleStrach_X_O [i][k] << " ";
        }
        cout<< "\n";
    }

    for (int m=0 ; m!= sizeof bubbleStrach_X_O; m++){
        char answer ;
        int placeA;
        int placeB;
        cout<< "Please input the place which you want to blow!"<<endl;
        cin >> placeA >>  placeB ;
        if (bubbleStrach[placeA-1][placeB-1]){
            bubbleStrach[placeA-1][placeB-1] = false;
            bubbleStrach_X_O[placeA-1][placeB-1] = 'O';
        }else if (placeA > 12 || placeA < 0 || placeB > 12 || placeB < 0){
            cout << "Incorrect input. ERROR! THERE ARE ONLY 12x12 !";
            return 0;
        }else{
            cout<< "That place is blown up already!";
        }

        for (int i=0; i!= sizeof bubbleStrach / sizeof bubbleStrach[0];i++ ){
        for (int k=0; k!= sizeof bubbleStrach / sizeof bubbleStrach[0];k++){

            cout << bubbleStrach_X_O [i][k] << " ";
        }
        cout<< "\n";
     }

     cout << "\nDo you want to continue?\nY - yes\nAnother will stop the game."<< endl;
     cin >> answer;
     if (answer != 'Y'){
        return 0;
     }

    }

    

}