#include <iostream>
#include <cmath>
#include <string>


std::string encrypt_caesar(std::string text, int ident){

   std::string caesarText;
   
   for (int i = 0 ; i != text.length() ; i++){
    if ((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <= 122) || text[i] == 32){    
    caesarText += (char)(text[i] + ident);    
    }else{
        std::cout << "Incorrect input!\n";
        break;
    }
   }
   std::cout << "The text of Ceaser is: \n" << caesarText;
   return text;
}


    int main ()
{
    int ident;
    std::string text;

    std::cout << "Input the text below: \n";
    std::getline(std::cin,text);
    std::cout << "Input the ident below : \n";
    std::cin >> ident;

    encrypt_caesar(text, ident);
    return 0;

}

