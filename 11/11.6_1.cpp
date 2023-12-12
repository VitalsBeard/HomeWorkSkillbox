#include <iostream>
#include <cmath>
#include <string>
using namespace std;




char encryptCharacter(char character, int shift) {
    if (isalpha(character)) { 
        char base = isupper(character) ? 'A' : 'a'; 
        return (character - base + shift) % 26 + base; 
    }
    return character; 
}


char decryptCharacter(char character, int shift) {
    return encryptCharacter(character, 26 - shift); 
}


string encrypt_caesar(string text, int shift) {
    for(char & character : text) { 
        character = encryptCharacter(character, shift); 
    }
    return text;
}


string decrypt_caesar(string text, int shift){
    for(char & character : text){ 
        character = decryptCharacter(character, shift); 
    }
    return text;
}

int main(){
    string text;
    cout << "Input the Ceaser code below:\n";

    getline(cin,text) ;
    int shift ;

    cout << "Input the shift please:\n";
    cin >> shift;


    string encrypted_text = encrypt_caesar(text, shift);
    cout <<"Encrypted: " << encrypted_text <<"\n";
    string decrypted_text = decrypt_caesar(encrypted_text, shift);
    cout <<"Decrypted: " << decrypted_text <<"\n";
    return 0;
}























// std::string encrypt_caesar(std::string text, int ident){

//    std::string caesarText;
   
//    for (int i = 0 ; i != text.length() ; i++){
//     if ((text[i] >= 65 && text[i] <=90) || (text[i] >= 97 && text[i] <= 122) ){  
//         caesarText += (char)(text[i] + ident);    
//     }else if (text[i] == 32){
//         caesarText += (char)text[i];
//     }else{
//         std::cout << "Incorrect input!\n";
//         break;
//     }
//    }
//    std::cout << "The text of Ceaser is: \n" << caesarText;
//    return text;
// }


//     int main ()
// {
//     int ident;
//     std::string text;

//     std::cout << "Input the text below: \n";
//     std::getline(std::cin,text);
//     std::cout << "Input the ident below : \n";
//     std::cin >> ident;

//     encrypt_caesar(text, ident);
//     return 0;

// }

