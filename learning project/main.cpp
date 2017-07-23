#include <iostream>
#include "Thermos.h"
using namespace std;

int main()
{
    //creating a new pointer that points to an instance of class Thermos
Thermos *living_room = new Thermos;
//setting some variables from class Thermos
living_room->Current_temp = 78;
living_room->Des_temp = 0;
living_room->Function = stay_const;
living_room->controller(living_room);
//calling functions from class Thermos
living_room->cool(living_room->Current_temp, living_room->Des_temp);
living_room->heat(living_room->Current_temp, living_room->Des_temp);
living_room->stay_const(living_room->Current_temp, living_room->Des_temp);
//writing results of functions to console
cout<<endl<<living_room->Current_temp<<endl<< living_room->Des_temp;
//clearing pointer
delete living_room;
}
