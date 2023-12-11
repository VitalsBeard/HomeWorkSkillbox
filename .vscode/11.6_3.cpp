#include <string>
#include <iostream>

bool is_valid_digit(char c)
{
    return c >= '0' && c <= '9';
}

bool is_valid_number(std::string number)
{
    if (number.length() == 0 || number.length() > 3)
    {
        std::cerr << "Invalid number length!";
        return false;
    }
    if (number.length() > 1 && number[0] == '0')
    {
        std::cerr << "Invalid leading zero!";
        return false;
    }
    for (int i = 0; i < number.length(); ++i) {
        if (!is_valid_digit(number[i]))
        {
            std::cerr << "Invalid digit symbol!";
            return false;
        }
    }
    if (number.length() == 3)
    {
        if (number[0] > '2' ||
            number[1] > '5' ||
            number[2] > '5')
        {
            std::cerr << "The number is too large!";
            return false;
        }
    }
    return true;
}

std::string get_address_number(std::string address, int index)
{
    std::string number;
    int src_index = 0;
    int i = 0;
    if (src_index != index) {
        for (; i < address.length(); ++i) {
            if (address[i] == '.') {
                src_index += 1;
                if (src_index == index) {
                    i += 1;
                    break;
                }
            }
        }
    }
    while (i < address.length())
    {
        if (address[i] == '.')
        {
            break;
        }
        number += address[i];
        i += 1;
    }
    return number;
}

int main()
{
    std::cout << "IP address:";
    std::string address;
    std::cin >> address;
    for (int i = 0; i < 4; ++i) {
        if (!is_valid_number(get_address_number(address, i)))
        {
            std::cerr << "Invalid!" << std::endl;
            return 1;
        }
    }

    std::cout << "Correct!" << std::endl;
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