#include<iostream>
#include <cmath>
#include <cassert>
using namespace std;



float travelTime(float distance, float speed)
{
    bool flagCorrect = true;
    float time;
    

    assert (distance >= 0);
    assert (speed >= 0);

    
    time = distance  / speed ;
    return time;
    
}

string hoursMin(float name)
{
    int hours;
    int min;
    string totalTime;
    bool flagCorrect = true;

    while (flagCorrect)
    {
        if (name >= 1){
            hours++;
            name -= 1;
        }else
        {
            min = (name*60);
            flagCorrect = false;    
        }
    }

    cout << "Your trip will contain - "<<hours<< " hours and "<< min << " min!";
    return "";
}


int main()
{
    float distance;
    float speed;
    

    cout << "Please input the distance and speed :\n";
    cin >> distance;
    cin >> speed;

    cout <<  hoursMin(travelTime(distance, speed));


}