#include <iostream>
#include <cmath>
#include <string>


std::string encrypt_caesar(std::string text, int ident){

    std::string ceasarText;
    bool correct = true;

    for ( int i = 0; i != text.length(); i++){
       
        if ((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <= 122) || text[i] == 32)
            {
            if (text[i] > 91 ) i = 65;
            if (text[i] > 122) i = 97;
            ceasarText += text[i + ident];
            }
        else {
            std::cout << "There are incorrect symbols!";
            correct = false;
            break;
        }

    }
    if (correct)
    {
    std::cout << "The code of Ceaser:\n" << ceasarText;
    }
    return "";
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

