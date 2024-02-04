#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;







int main (){

   vector <int> vec = {7,2,1,4,5,6,3,2,4};
   
   for ( int i =0; i < vec.size(); i++)
   {
      for ( int j = 0; j <vec.size()-1-i; j++){

         if(vec[j] > vec[j+1]){
            swap (vec[j], vec[j+1]);
         }
      }
   }

   for ( int i =0; i != vec.size(); i++){
      cout << vec[i];
      
   }
   int temp;
   cin >>temp ;

   return 0;
   }
   