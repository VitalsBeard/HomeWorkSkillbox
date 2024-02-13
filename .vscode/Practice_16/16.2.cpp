#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

double Counting (string first_part, string second_part){

    double total_num = stod(first_part) + stod(second_part);
    return total_num;

}

int main (){

    string integer;
    string second_num;

    cout << "Please input the number one by one:\n";
    cin >> integer >> second_num;
    cout << "All in all - " << Counting (integer, second_num);

}