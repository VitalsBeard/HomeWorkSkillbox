#include <iostream>
#include <vector>
// using namespace std;



int main() {
    
    int cutlery[2][12] = {{3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
                          {3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}};

    
    int plates[2][12] = {{2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
                         {2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}};

    
    int chairs[2][12] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

   
    chairs[0][4] += 1;

   
    cutlery[1][2] -= 1;

    
    cutlery[0][1] -= 1;
    cutlery[1][2] += 1;

    
    plates[0][1] -= 1;

   
    std::cout << "Cutlery (Spoons):" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 12; ++j) {
            std::cout << cutlery[i][j] << " ";
        }
        std::cout << std::endl;
    }

   
    
    return 0;
}



// int main()
// {
//     int people [2][6]; // 2 ряда по 6 человек, где 0 - vip.
//     int row = 2; // ряды
//     int tableWare[12][4] = {{4,1,2,3}, {4,1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3} };  // 12 персон по 4 прибора, где только у VIP ( 0 и 1  элемент) будет ложечка десертная. 1- вилка , 2 - ложка , 3 - нож, 4 - десертная ложка - 0 - если нет десертной ложки.
//     int plates[12]={2,2,1,1,1,1,1,1,1,1,1,1}; // 12 персон по 2 тарелки, где у випов( 0 и 1 элементы) будет еще одна десертная. 1 - просто две тарелки, 2 - три тарелки включая десертную.
//     int chairs[2][6] = {{1,1,1,1,1,1},{1,1,1,1,1,1}};
//     vector <int> allChairs(12);


//     cout << "All 12 guests are arrived!\n";
//     cout <<"Child has come.";
    
//     for (int i = 0 ; i!= row; i++){
//         for (int j =0; j!=6; j++){

//             if (i == 1 && j == 5){
                

//             }

//         }
//     }
    


// }