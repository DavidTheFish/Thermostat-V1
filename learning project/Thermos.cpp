#include <iostream>
#include "Thermos.h"
using namespace std;

void Thermos::cool(int &X, int const Y){

    while(X > Y && Function==0){
        X--;
        cout<<X<<endl;
    }
}
void Thermos::heat(int &X, int const Y){
while(X < Y && Function == 1){
    X++;
    cout<<X<<endl;
}
}
void Thermos::stay_const(int &X, int const Y){
while(X > Y && Function == 2){
    X--;
    cout<<X<<endl;
}
while(X < Y && Function == 2){
    X++;
    cout<<X<<endl;
}
}
