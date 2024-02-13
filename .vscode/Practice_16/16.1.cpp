#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



int main (){
   
   string speed_value; // Новое значение скорости
   string speed_str ; // итоговая скорость

   do{
   float a = sprintf(speed_str, "%.1f", speed_value);
   cout << a;
   }while(speed_str != "0");
      

    
}

