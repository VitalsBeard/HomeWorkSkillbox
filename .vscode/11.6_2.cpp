#include<iostream>
#include<string>

bool isValidEmail(std::string email) {
    bool at_found = false;
    bool dot_found = false;

    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            if(i == 0)    
                return false;
            else
                at_found = true;
        } 
        else if (email[i] == '.') {
            if(at_found) 
                dot_found = true;

        }else if ((email[i] < 33 && email[i] > 39) || (email[i] < 42 && email[i] > 57) || (email[i] < 64 && email[i] > 90) || 
                (email[i] < 97 && email[i] > 126)){
                return false;
      }
    }
    return at_found && dot_found; 
}


int main() {
    std::string email;
    std::cout << "Enter an email address: ";
    std::cin >> email;
    
    if(isValidEmail(email))
        std::cout  << " YES";
    else
        std::cout  << " NO";
}





// std::string checkEmailAdressFirstPart(std::string emailAdress){
//   bool flag = true;
//   std::string correctFirstPArt;
//   for (int i =0 ; i != '@'; i++){
//     if(emailAdress[i] == '.' && emailAdress[i +1] == '.' ){
//        flag = false;
//        break;
//     }else if (i>64){
//       flag = false;
//     }else if ((emailAdress[i] >= 33 && emailAdress[i] <= 39) || (emailAdress[i] >= 42 && emailAdress[i] <= 57) || (emailAdress[i] >= 64 && emailAdress[i] <= 90) || 
//              (emailAdress[i] >= 97 && emailAdress[i] <= 126)){
//         correctFirstPArt += (char)emailAdress[i];
//     }else{
//       flag = false;
//     }
//   }

//   if (flag){
//     return "YES!";
//   }else{
//     std::cout << "Incorrect 1-st part!\n";
//     return "NO";
//     }

// }

// std::string checkEmailAdressSecondPart(std::string emailAdress){
//  int count =0;
//  bool flag = true;
//  std::string correctSecondPart;

//  while (emailAdress[count] !='@'){
//   count++;
//  }

//  for (int i = count+1 ; i != emailAdress.length(); i++){
//     if (emailAdress[i] == '@'){
//       flag = false;
//       break;
//     }else if ((emailAdress[i] >= 33 && emailAdress[i] <= 39) || (emailAdress[i] >= 42 && emailAdress[i] <= 57) || (emailAdress[i] >= 64 && emailAdress[i] <= 90) || 
//              (emailAdress[i] >= 97 && emailAdress[i] <= 126)){
//       correctSecondPart += (char)emailAdress[i];
//        }
//  }

// if (flag){
//   return "Yes";
// }else{
//   std::cout << "Incorrect input in second part!\n";
//   return "NO";
//   }
// }


// int main(){
//   std::string emailAdress;
//   std::cout << "Input the email adress below:\n";
//   std::cin >> emailAdress;
//   // checkEmailAdressFirstPart(emailAdress);
//   // checkEmailAdressSecondPart(emailAdress);
//   std::cout << checkEmailAdressFirstPart(emailAdress) + checkEmailAdressSecondPart(emailAdress);
// }
















// int chekMail( std::string adressName)
// {
//   int count = 0;
//   std::string correctMail;
//  bool flag = true;

//  for (int i = 0; i!= adressName.length(); i ++){
//     for ( int i = 0; i != '@' ; i++){
//     count++;

//     if( adressName [i] == '.' && adressName [i+1]== '.'){
//           flag = false;
//            break;
//     }else if ((adressName[i] >= 33 && adressName[i] <= 39) || (adressName[i] >= 42 && adressName[i] <= 57) || (adressName[i] >= 64 && adressName[i] <= 90) || 
//              (adressName[i] >= 97 && adressName[i] <= 126)){

//             correctMail += (char)adressName[i];
//             flag = true;
//             } 
//   }


//     correctMail+='@';

//     for(int i = count ; i != adressName.length() ; i++){
//         if( (adressName [i] == '.' && adressName [i+1]== '.') || (adressName[i] = '@')){
//           flag = false;
//            break;
//         }else if ((adressName[i] >= 33 && adressName[i] <= 39) || (adressName[i] >= 42 && adressName[i] <= 57) || (adressName[i] >= 64 && adressName[i] <= 90) || 
//              (adressName[i] >= 97 && adressName[i] <= 126)){

//             correctMail += (char) adressName[i];
//             flag = true;
//             }else{

//                 std::cout << "NO!";
//                 break;
//             }
//     }

//   }
  
//   if (flag){
//     std::cout << "YES!";
//   }
//  return 0;
// }


// int main (){
//     std::string adressName;

//     std::cout << "Input the mail adress: \n";
//     std::cin >> adressName;
//     chekMail(adressName);
// }







