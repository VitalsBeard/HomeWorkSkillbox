#include<iostream>
#include<string>




int chekMail( std::string adressName)
{
  int count = 0;
  std::string correctMail;
 bool flag = true;

 for (int i = 0; i!= adressName.length(); i ++){
    for ( int i = 0; i != '@' ; i++){
    count++;

    if( adressName [i] == '.' && adressName [i+1]== '.'){
          flag = false;
           break;
    }else if ((adressName[i] >= 33 && adressName[i] <= 39) || (adressName[i] >= 42 && adressName[i] <= 57) || (adressName[i] >= 64 && adressName[i] <= 90) || 
             (adressName[i] >= 97 && adressName[i] <= 126)){

            correctMail += (char)adressName[i];
            flag = true;
            } 
  }


    correctMail+='@';

    for(int i = count ; i != adressName.length() ; i++){
        if( (adressName [i] == '.' && adressName [i+1]== '.') || (adressName[i] = '@')){
          flag = false;
           break;
        }else if ((adressName[i] >= 33 && adressName[i] <= 39) || (adressName[i] >= 42 && adressName[i] <= 57) || (adressName[i] >= 64 && adressName[i] <= 90) || 
             (adressName[i] >= 97 && adressName[i] <= 126)){

            correctMail += (char) adressName[i];
            flag = true;
            }else{

                std::cout << "NO!";
                break;
            }
    }

  }
  
  if (flag){
    std::cout << "YES!";
  }
 return 0;
}


int main (){
    std::string adressName;

    std::cout << "Input the mail adress: \n";
    std::cin >> adressName;
    chekMail(adressName);
}







