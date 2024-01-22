#include <iostream>
#include <vector>
using namespace std;



char blowProc(int placeFirstCoord,int placeSecondCoord,int placeThirdCoord,int placeFourthCoord, char bubbleStrach_X_O){
    

    for (int i = placeFirstCoord; i != placeSecondCoord + placeFirstCoord; i++){
        for (int k = placeSecondCoord; k != placeSecondCoord + placeFirstCoord; k++){
          char bubbleStrach_X_O [i][k]= 'O';
        }
    }




    return bubbleStrach_X_O;

}




int main()
{

    bool bubbleStrach[12][12];
    char bubbleStrach_X_O[12][12]; 
    int coordinatesBubble [12][12];

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
        int placeFirstCoord;
        int placeSecondCoord;
        int placeThirdCoord;
        int placeFourthCoord;
        int count = 0;
        cout<< "Please input the first coordinates (x/y) which you want to blow!"<<endl;
        cin >> placeFirstCoord >>  placeSecondCoord ;
        cout<< "Please input the second coordinates (x/y) which you want to blow!"<<endl;
        cin>> placeThirdCoord >> placeFourthCoord;


    char blowProc(int placeFirstCoord,int placeSecondCoord,int placeThirdCoord,int placeFourthCoord,char bubbleStrach_X_O);


        

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