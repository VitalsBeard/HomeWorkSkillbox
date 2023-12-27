#include <iostream>
#include <vector>
using namespace std;



int main ()
{
    std::vector<int> db(20);
    int number ;

    while (number != -1)
    {
        cout << "input the number: ";
        cin >> number;
//         if(db.size() != 20 ){
//             db.push_back(number);
//         }else{
//             break;
//         }
//     }

//     cout << "Output: ";
//     for(int i=0; i!=db.size(); i++){
//         cout<< db[i];
//     }
// }