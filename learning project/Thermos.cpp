#include <iostream>
#include<conio.h>
#include "Thermos.h"
using namespace std;

void Thermos::cool(int &X, int const Y){

    while(X > Y && Function==0){
        X--;
        cout<<X<<endl;
    }//end of while
}//end of cool
void Thermos::heat(int &X, int const Y){
while(X < Y && Function == 1){
    X++;
    cout<<X<<endl;
}//end of while
}//end of heat
void Thermos::stay_const(int &X, int const Y){
while(X > Y && Function == 2){
    X--;
    cout<<X<<endl;
}
while(X < Y && Function == 2){
    X++;
    cout<<X<<endl;
}//end of while
}//end of stay_const
void Thermos::controller(Thermos *V){
char ch = getch();
while (ch != '\r'){
    if(ch == 'w'){
        this->Des_temp++;
        cout<<this->Des_temp<<endl;
    }//end of if
    else if (ch == 's'){
        this->Des_temp--;
        cout<<this->Des_temp<<endl;
    }//end of else if
    ch = getch();
}//end of while
}//end of controller

Thermos :: ~Thermos(){
cout<<endl<<"all done";
}//Thermos end
