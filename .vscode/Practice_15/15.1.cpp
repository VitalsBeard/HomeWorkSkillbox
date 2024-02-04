#include<iostream>
#include<vector>

using namespace std;

int main(){
    
   vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
   int maximum_num1 = 0;
   int maximum_num2 = 0; 
   

   for(int i = 0; i!= a.size()-1; i++)
   {
        for(int j = 0; j!=a.size()-1; i++)
        {
            maximum_num1 = a[i] + a[j-i] + a[j-i] + a[j-i] ;
        }
        cout << maximum_num1;
        cin >> maximum_num1;
   }

return 0;
}