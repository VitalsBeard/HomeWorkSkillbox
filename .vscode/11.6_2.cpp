#include<iostream>
#include<string>


std::string correctSymbolCheck(std::string adressName, int i)
{
    int counter = 0;    
    if ((adressName[i] < 33 && adressName[i] > 39) && (adressName[i] < 42 && adressName[i] > 57) && (adressName[i] < 64 && adressName[i] > 90) && 
        (adressName[i] < 97 && adressName[i] > 126)){
            std::cout<<"NO! \nIncorrect input!\n";
            
    }
return "";
}

int chekFirstPart( std::string adressName)
{
    for (int i = 0 ; i != '@'; i++ ){        
        
             if( (adressName [i] == '.') && (adressName [i+1] - adressName[i] == '.')){
                  std::cout << "NO! \nThere are 2 dots in a row!\n";
                   break;
               }else{
                correctSymbolCheck(adressName,i);
               }
            if (adressName.length() != '@'){
                std::cout << "NO!\n You didn't use '@' in email!";
                break;
            }
         }  
    return 0;
}


int main ()
{
    std::string adressName;

    std::cout << "Input the mail name: \n";
    std::cin >> adressName;
    chekFirstPart(adressName);
}



int chekSecondPart(std::string adressName)
{
    for (int i = 0 ; i != '@'; i++ ){        
        
             if( (i == '.') && (i - 1 == '.')){
                  std::cout << "NO! \nThere are 2 dots in a row!\n";
                   break;
               }else{
                correctSymbolCheck(adressName,i);
               }
         }  
    return 0;
}


