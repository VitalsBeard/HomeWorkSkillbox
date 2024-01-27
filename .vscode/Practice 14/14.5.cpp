#include <iostream>
#include <vector>
using namespace std;






void initializePupyrika(bool pupyrika[][12], int width, int height);
void displayPupyrika(bool pupyrika[][12], int width, int height);
bool anyBubblesLeft(bool pupyrika[][12], int width, int height);
void popBubbles(bool pupyrika[][12], int width, int height, int startX, int startY, int endX, int endY);

int main() {
    
    int pupyrikaWidth = 12;
    int pupyrikaHeight = 12;
    bool pupyrika[12][12];

  
    initializePupyrika(pupyrika, pupyrikaWidth, pupyrikaHeight);

    while (anyBubblesLeft(pupyrika, pupyrikaWidth, pupyrikaHeight)) {
        displayPupyrika(pupyrika, pupyrikaWidth, pupyrikaHeight);

        std::cout << "\nEnter the coordinates of the region to pop (startX startY endX endY): \n";
        int startX, startY, endX, endY;
        std::cin >> startX >> startY >> endX >> endY;

        popBubbles(pupyrika, pupyrikaWidth, pupyrikaHeight, startX - 1, startY - 1, endX - 1, endY - 1);
    }

    std::cout << "All bubbles are popped!" << std::endl;
    return 0;
}

void initializePupyrika(bool pupyrika[][12], int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            pupyrika[i][j] = true;
        }
    }
}

void displayPupyrika(bool pupyrika[][12], int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << (pupyrika[i][j] ? 'o' : 'x') << " ";
        }
        std::cout << std::endl;
    }
}

bool anyBubblesLeft(bool pupyrika[][12], int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (pupyrika[i][j]) {
                return true;
            }
        }
    }
    return false;
}

void popBubbles(bool pupyrika[][12], int width, int height, int startX, int startY, int endX, int endY) {
    if (startX < 0 || startX >= width || startY < 0 || startY >= height ||
        endX < 0 || endX >= width || endY < 0 || endY >= height) {
        std::cout << "Error: coordinates are out of range." << std::endl;
        return;
    }

    for (int i = startX; i <= endX; ++i) {
        for (int j = startY; j <= endY; ++j) {
            if (pupyrika[i][j]) {
                pupyrika[i][j] = false;
                std::cout << "Pop!" << std::endl;
            }
        }
    }
}
















// char blowProc(int placeFirstCoord,int placeSecondCoord,int placeThirdCoord,int placeFourthCoord, char bubbleStrach_X_O){
    

//     for (int i = placeFirstCoord; i != placeSecondCoord + placeFirstCoord; i++){
//         for (int k = placeSecondCoord; k != placeSecondCoord + placeFirstCoord; k++){
// //          char bubbleStrach_X_O [i][k]= 'O';
//         }
//     }




//     return bubbleStrach_X_O;

// }




// int main()
// {

//     bool bubbleStrach[12][12];
//     char bubbleStrach_X_O[12][12]; 
//     int coordinatesBubble [12][12];

//     for (int i=0; i!= sizeof bubbleStrach / sizeof bubbleStrach[0];i++ ){
//         for (int k=0; k!= sizeof bubbleStrach / sizeof bubbleStrach[0];k++){

//             bubbleStrach[i][k]= true;
//             bubbleStrach_X_O[i][k] = 'X';
//             cout << bubbleStrach_X_O [i][k] << " ";
//         }
//         cout<< "\n";
//     }

//     for (int m=0 ; m!= sizeof bubbleStrach_X_O; m++){
//         char answer ;
//         int placeFirstCoord;
//         int placeSecondCoord;
//         int placeThirdCoord;
//         int placeFourthCoord;
//         int count = 0;
//         cout<< "Please input the first coordinates (x/y) which you want to blow!"<<endl;
//         cin >> placeFirstCoord >>  placeSecondCoord ;
//         cout<< "Please input the second coordinates (x/y) which you want to blow!"<<endl;
//         cin>> placeThirdCoord >> placeFourthCoord;


//     char blowProc(int placeFirstCoord,int placeSecondCoord,int placeThirdCoord,int placeFourthCoord,char bubbleStrach_X_O);


        

//         for (int i=0; i!= sizeof bubbleStrach / sizeof bubbleStrach[0];i++ ){
//         for (int k=0; k!= sizeof bubbleStrach / sizeof bubbleStrach[0];k++){

//             cout << bubbleStrach_X_O [i][k] << " ";
//         }
//         cout<< "\n";
//      }

//      cout << "\nDo you want to continue?\nY - yes\nAnother will stop the game."<< endl;
//      cin >> answer;
//      if (answer != 'Y'){
//         return 0;
//      }

//     }

    

// }