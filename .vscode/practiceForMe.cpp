#include<iostream>
#include<string>
#include <vector>
#include <algorithm>

using namespace std;


enum WindowStyle {
   HasMaxButton = 1,
   HasMinButton = 2,
   HasCloseButton = 4
};

int main(){
  enum Buttons { Button1, Button2,Button3};
  int button = Button3 | Button2;
  std::cout << button;
}