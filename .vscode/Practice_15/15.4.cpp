#include <iostream>
#include <vector>
#include <cmath>

using namespace std;





int main()
{
    vector <int> vec = {-100,-50, -5, 1, 10, 15};
    vector <int> correct_vec;
    correct_vec.resize(vec.size());
    int n;

    for (int i = 0; i != vec.size(); i ++){
        correct_vec[i] = abs(vec[i]);
    }
    for(int j = 0; j!=correct_vec.size(); j++){
        for(int k =0; k!= correct_vec.size(); k++){
            if(correct_vec[j]>=correct_vec[k]) swap (correct_vec[k],correct_vec[j]);
        }
    }

    for(int i =0; i!=vec.size();i++ ){
        cout<< correct_vec[i]<< " ";
    }

    cin >> n;
}