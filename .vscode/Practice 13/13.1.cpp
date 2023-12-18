#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int n;
    int newNumbers;
    cout << "Input the size of vector:\n";
    cin >> n;
    vector <int> vec(n);

    cout << "Input the numbers";

    for (int i = 0 ; i!=n+1; i++)
    {
        cin >> newNumbers;
        vec.push_back(newNumbers);
    }

    cout << "Input numbers to delete:";
    cin >> newNumbers;

    for (int i = 0; i != vec.size(); i++)
    {
        if (newNumbers == vec[i]){
            vec.pop_back();
        }
    }
    
    cout << "Result:\n";

    for (int i = 0; i!=vec.size(); i++){
        cout << vec[i];
    }
}
