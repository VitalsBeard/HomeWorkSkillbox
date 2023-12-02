#include <iostream>




bool isValidIP(std::string ip) {
    int dots = 0, num = 0;
    for (int i = 0; i < ip.length(); i++) {
        char c = ip[i];
        if(c == '.') {
            dots++;
            if(num < 0 || num > 255) return false;
            num = 0;
        }
        else if(c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
        else return false; 
    }
    return dots == 3 && num >= 0 && num <= 255;
}

int main() {
    std::string ip;
    std::cout << "Enter an IP address: ";
    std::cin >> ip;

    if(isValidIP(ip))
        std::cout << "YES!";
    else
        std::cout  << " NO";
}


// bool checkIP(std::string adressIP){

//     bool flag = false;
    

//     for (int i ; i!=adressIP.length() ; i++){
//         for (int d ; d != '.'; d++){
//             int countSumm;
//             int symFirst=0;
//             int symSec = 0;
//             int symThird = 0;
//             symFirst = (adressIP[0] - 48) *100;
//             symSec = (adressIP[1] - 48) *10;
//             symThird = (adressIP[2] - 48);
//             countSumm =  symFirst + symSec = symThird;            

//         }
//     }


// }





// int main(){

//     std::string adressIP;

//     std::cout << "Input the IP adress below:\n";
//     std::cin >> adressIP;
//     checkIP(adressIP);

// }



// bool checkIP(std::string ipAdress){
//     bool correctIP ;
//     int count = 0;

//     for (int i = 0 ; i != ipAdress.length(); i++)
//     {
//         int count = 0;

//         if (ipAdress[i] != '.')
//         {
//             count ++;
//             if (count > 3){
//                 correctIP = false;
//                 break;
//             }else if (ipAdress[i] <48 && ipAdress[i]>57)
//             {
//                 correctIP = false;
//                 break;
//             }else {
//                 correctIP = true;
//             }            
//         }
//     }


// return correctIP;
// }



// int main(){

//     std::string ipAdress;
//     std::cout << "Input the IP adress please: \n";
//     std::cin >> ipAdress;

//     checkIP(ipAdress);
//     if(checkIP){
//         std::cout<< "VALID!";
//     }else{
//         std::cout<< "INVALID";
//     }

// }