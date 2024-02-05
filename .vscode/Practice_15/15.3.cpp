#include <iostream>
#include <vector>
using namespace std;



int main ()
{
    vector <int> numList;
    int answer;
    int number = 0;

    while(answer != -2){
        cout << "Please input the number^\n";
        cin >> number;
        if(answer != -1 ){
            numList.push_back(number);
            

        }else if (answer == -2 ){
            return 0;


        }else if (answer == -1){
            for(int i = 0 ; i != numList.size(); i++){
                for (int j = i+1 ; j != numList.size(); j++){
                    if (numList[i] >= numList[j]){
                            swap(numList[i], numList[j]);
                    }
                }
            }

            cout << "The fifth number is - " << numList[4];

        }
    }
}