#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main ()
{
    vector <int> vectorB (4);
    int matrixA [4][4];
    vector <int> matrixLast (4);

    cout << "Please input the numbers for matrix:\n";

    for ( int i= 0; i!= sizeof matrixA/sizeof matrixA[0]; i++ )
    {
        cout << "Step "<< i+1<< "\n";

        for( int k = 0 ; k!=sizeof matrixA/ sizeof matrixA[0]; k++)
        {
            cin >> matrixA[i][k];
        }
        
    }

    cout<< "Please input the numbers for vector:\n";
    for (int i = 0; i!= 4; i++)
    {
        cin >> vectorB[i];
    }


    for (int i =0; i !=sizeof matrixA/ sizeof matrixA[0]; i++){
        int count = matrixA[i][0]*vectorB[0] + matrixA[i][1]*vectorB[1] + matrixA[i][2]*vectorB[2] + matrixA[i][i]*vectorB[3] ;
        matrixLast[i]=count;
    }


    for (int i =0; i != 4; i++)
    {
        cout << matrixLast[i]<< " ";
    }
}