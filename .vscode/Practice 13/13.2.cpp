#include <iostream>
#include <vector>

using namespace std;

int main()
{
      vector<float> prices{2.5, 4.25, 3.0, 10.0};
      vector<int> goods{1, 1, 0, 3};
      float summAll=0;

      for(int i = 0 ; i != goods.size(); i++)
      {
          int number = goods[i];        
          summAll += prices[number];
      }

      cout << "Summ of the products is "<< summAll;
}
