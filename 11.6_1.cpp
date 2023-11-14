#include <iostream>
#include <cmath>
#include <string>



std::string text;\
int ident;


int main ()
{
    std::cout << "Input the text below: \n";
    std::cin >> text;
    std::cout << "Input the ident below : \n";
    std::cin >> ident;
    encrypt_caesar(text, ident);

}


std::string encrypt_caesar(std::string text, int ident){

    std::string ceasarText;

    for ( int i = 0; i != text.length(); i++){
        if (text[i] == 32){
            std::string textSumm;
            textSumm = text[i + ident];
            ceasarText += textSumm;
            }
    }

} 
