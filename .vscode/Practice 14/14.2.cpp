#include <iostream>
#include <vector>
using namespace std;




int main()
{
    char playerChoice;
    bool places[3][3]= {{false,false,false},{false,false,false},{false,false,false}};
    bool check = true;
    char answer[3][3] = {{0,0,0},{0,0,0},{0,0,0}} ;
    int countX=0;
    int countO=0;

    for (int i=0; i!=3; i++){
        cout<< "Please input your step";
        for (int j=0; j!=3; j++){

            cin >> answer[i][j];
            if(places[i][j] != true){
                places[i][j] == true;
            }else{
                cout<< "There are another symbol!";
                return 0;
            }
            if (answer[i][j] =='X'|| answer[i][j]== 'x') countX++;
            if (answer[i][j] =='O'|| answer[i][j] =='o') countO++;
        }
        if(countX == 2 || countO == 2){
            cout << "Incorrect input.There are can be only 'X' or 'O' or ' ' in the line!\nPlease start again the game! ";
            return 0;
        }


    }

} 