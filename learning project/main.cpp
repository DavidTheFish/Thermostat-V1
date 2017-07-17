#include <iostream>
#include "Thermos.h"
using namespace std;


int main()
{
Thermos living_room;
living_room.Current_temp = 78;
living_room.Des_temp = 400;
living_room.Function = heat;

living_room.cool(living_room.Current_temp, living_room.Des_temp);
living_room.heat(living_room.Current_temp, living_room.Des_temp);
living_room.stay_const(living_room.Current_temp, living_room.Des_temp);
cout<<endl<<living_room.Current_temp<<endl<< living_room.Des_temp;
}
