#include <iostream>
#include <vector>
using namespace std;


int main(){

int matrix1[4][4];
int matrix2[4][4];
int matrix3[4][4];
bool check = false;

cout<<"Please input the numbers for first matrix:\n";

for (int i = 0 ; i!= sizeof matrix1/ sizeof matrix1[0]; i++){
    for(int k = 0 ; k!= sizeof matrix2/ sizeof matrix2[0]; k++){
        cin >> matrix1[i][k] ;        
    }    
}


cout<<"Please input the numbers for second matrix:\n";

for (int i = 0 ; i!= sizeof matrix1/ sizeof matrix1[0]; i++){
    for(int k = 0 ; k!= sizeof matrix2/ sizeof matrix2[0]; k++){
        cin >> matrix2[i][k] ;    


        if (matrix1[i][k] == matrix2[i][k]) matrix3[i][k] == matrix1[i][k]; // По идее при проверке нам надо знать, если они не сходятся то просто закрыть программу, будет ли корректно сделатьпроверку 
        //сразу на вводе во вторую матрицу, я не заню, но так код будет короче и проще
        else {
            cout<< "Martix's are not equal !";
            return 0;

        }
    }    
}

for (int i = 0 ; i!= sizeof matrix3/ sizeof matrix3[0]; i++){
    for(int k = 0 ; k!= sizeof matrix3/ sizeof matrix3[0]; k++){
        if (i!=k){
            matrix3[i][k] = 0;
        }

        // cout << matrix3[i][k]<< " ";        

        // // if (matrix1[i][k] == matrix2[i][k]) matrix3[i][k] == matrix1[i][k];
        // // else {
        // //     cout<< "Martix's are not equal !";
        // //     return 0;
        // // }       

        }

        // cout << endl;
    
    }

for (int i = 0 ; i!= sizeof matrix3/ sizeof matrix3[0]; i++){
    for(int k = 0 ; k!= sizeof matrix3/ sizeof matrix3[0]; k++){
         cout << matrix3[i][k]<< " ";        


        }
         cout << endl;
    }
}
