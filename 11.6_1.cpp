#include <iostream>
#include <cmath>
#include <string>



std::string text;
int ident;


std::string encrypt_caesar(std::string text, int ident){

    std::string ceasarText;

    for ( int i = 0; i != text.length(); i++){
        std::string textSumm;
        if (text[i] == 32){
            ceasarText += " ";
            }
        else if ((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <= 122)){
            ceasarText += text[i + ident];
            }
        else {
            std::cout << "There are another symbols!";
            break;
        }
    }
    std::cout << " The code of Ceaser:\n" << ceasarText;
    return 0;
}


    int main ()
{
    std::cout << "Input the text below: \n";
    std::cin >> text;
    std::cout << "Input the ident below : \n";
    std::cin >> ident;

    encrypt_caesar(text, ident);
    return 0;

}

