#include<iostream>
#include<string>




int chekMail( std::string adressName)
{
    int count = 0;
    for (int i = 0 ; i != '@'; i++ ){        
        
             if( adressName [i] == '.' && adressName [i+1]== '.'){
                  std::cout << "NO! \nThere are 2 dots in a row!\n";
                   break;
               }else if ((adressName[i] < 33 && adressName[i] > 39) && (adressName[i] < 42 && adressName[i] > 57) && (adressName[i] < 64 && adressName[i] > 90) && 
                    (adressName[i] < 97 && adressName[i] > 126)){
            std::cout<<"NO! \nIncorrect input!\n";
            break;            
            } 
            count ++;
         }


    for (int i = count; i != adressName.length()-1 ; i++){
        if( adressName [i] == '.' && adressName [i+1]== '.'){
            std::cout << "NO! \nThere are 2 dots in a row!\n";
            break;
        }else if ((adressName[i] < 33 && adressName[i] > 39) && (adressName[i] < 42 && adressName[i] > 57) && (adressName[i] < 64 && adressName[i] > 90) && 
                (adressName[i] < 97 && adressName[i] > 126)){
            std::cout<<"NO! \nIncorrect input after '@'!\n";   
            break;         
        } else if (adressName[i] == '@'){
            std::cout << "NO! \nThere are 2 symbols of '@' in a row!\n";
            break;
        } else if (adressName.length() - 4 != '.' || adressName.length() - 3 != '.'){
            std::cout << "NO! \nYou didn't input the dot before your prefics!";
            break;
        }else{
            std::cout << "Yes!";
        }
    }
    return 0;
}


int main ()
{
    std::string adressName;

    std::cout << "Input the mail name: \n";
    std::cin >> adressName;
    chekMail(adressName);
}







