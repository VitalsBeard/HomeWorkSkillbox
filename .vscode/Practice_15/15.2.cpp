#include <iostream>
#include <vector>

using namespace std;



int main (){

    vector <int> a = {5, 7, 11, 15};
    int result = 20;
    bool check = false;
    int firstCorrect = 0;
    int secondCorrect = 0;


    for (int i = 0 ; i!= a.size(); i++){
        for(int j = i; j!= a.size(); j++){

            int summAll = a[i] + a[j + 1];
            if (summAll == result){   
                firstCorrect = a[i];
                secondCorrect = a[j+1];         
             check = true;
             }

        }
        

    }
    if (check) {
        cout << firstCorrect << " + " << secondCorrect << " = "<< result;
    }else{
        cout << " ";
    }

    cin >> result;

}