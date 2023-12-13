#include <iostream>
#include <string>

using namespace std;






int main()
{
    string surnamesOfHomekeeper [10];
    int flat;

    cout << "Input the surnames of the homekeepers (max. 10) : \n";

    for(int i = 0 ; i != 10; i++)
    {
        cin >> surnamesOfHomekeeper[i];
    }

    

    for(int i = 0 ; i !=3; i ++)
    {
        cout << "Please input the number of flat :\n";
        cin >> flat;
        cout << surnamesOfHomekeeper[flat -1] << "\n";
    }
}