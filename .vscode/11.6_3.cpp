#include <iostream>



bool checkIP(std::string ipAdress){
    bool correctIP ;
    int count = 0;

    for (int i = 0 ; i != ipAdress.length(); i++)
    {
        int count = 0;

        if (ipAdress[i] != '.')
        {
            count ++;
            if (count > 3){
                correctIP = false;
                break;
            }else if (ipAdress[i] <48 && ipAdress[i]>57)
            {
                correctIP = false;
                break;
            }else {
                correctIP = true;
            }            
        }
    }


return correctIP;
}



int main(){

    std::string ipAdress;
    std::cout << "Input the IP adress please: \n";
    std::cin >> ipAdress;

    checkIP(ipAdress);
    if(checkIP){
        std::cout<< "VALID!";
    }else{
        std::cout<< "INVALID";
    }

}