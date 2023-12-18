#include <iostream>
using namespace std;


int main ()
{   
    int doubleNumber;
    float numbers[15] ;
    cout << "Input the numbers\n";
    for (int i=0; i != 15; i++)
    {
        cin >> numbers[i];
    }

    for(int i = 0; i!=15; i++){
        for (int j = i+1; j!=15; j++){
            if (numbers[i] = numbers[j])  doubleNumber = numbers[i] ;
        }
    }

    cout << doubleNumber << " is dublicated!";
}