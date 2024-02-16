#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;



int main (){
   
   string speed_value; // Новое значение скорости
   float speed_str ; // итоговая скорость

   do{
      cout << "Speed delta: ";
      cin >> speed_value;
      float a = sprintf(speed_str, "%.1f", speed_value);
      cout << "Speed: " << a;
      if (speed_str > 150.0){
         speed_str = 150.0;
      }
   }while(speed_str != 0);
      

    
}

