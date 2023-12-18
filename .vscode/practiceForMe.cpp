#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;







int main ()
{
   vector<int>robotsStart ;
   int n ;
  

   while (n != -1)
   {
    cout << "Please input the number: ";
    cin >> n;
    robotsStart.push_back(n); 
    for (int i = 0 ; i != robotsStart.size(); i++)
    {
      if (n > robotsStart[i])
      {
         
         robotsStart.push_back(n);
         robotsStart.pop_back();
      }
    }   
    }

   sort(begin (robotsStart), end (robotsStart));
    
  
   for (int i =0 ; i!= robotsStart.size(); i++)
   {
      cout << robotsStart[i] << " ";
   }
}