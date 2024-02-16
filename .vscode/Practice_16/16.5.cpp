#include <iostream>
#include <vector>

using namespace std;


enum Switches 
{ 
    LIGHTS_INSIDE = 1, 
    LIGHTS_OUTSIDE = 2, 
    HEATERS = 4, 
    WATER_PIPE_HEATING = 8, 
    CONDITIONER = 16 
};

int main (){
    // bool electricity_of_house = true;
    // bool power_socet_based = true;
    // bool lihgts_inside_house = true;
    // bool lights_outside_garden = true;
    // bool water_pipe_heating_switch = true;
    // bool air_condition = true;

    int temperature_inside = 0 ;
    int temperature_outside = 0 ;
    string answer_1;
    string answer_2;
    bool movement = false;
    bool lights = false;

    int time_to_end = 48;

    for ( int i = 0; i != time_to_end; i++){

        cout << "Please input information below\nTemperature inside, temperature outside, movement, lights:\n";
        cin >> temperature_inside >> temperature_outside >> answer_1 >> answer_2;
        movement = (answer_1 == "Yes" || answer_1 == "yes") ? movement = true : movement = false;
        lights = (answer_2 == "Yes" || answer_2 == "yes") ? lights = true : lights = false;

        if (temperature_outside < 0) Switches::HEATERS ;

    }

}