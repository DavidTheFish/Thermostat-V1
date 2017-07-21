#ifndef THERMOS_H_INCLUDED
#define THERMOS_H_INCLUDED

//setting up an enumerator for class Thermos
enum Temp_funct{cool,heat,stay_const
};

class Thermos{
public:
    Temp_funct Function;
    int Current_temp;
    int Des_temp;
//function prototypes, if you want more info refer to Thermos
void cool(int &X, int const Y);
void heat(int &X, int const Y);
void stay_const(int &X, int const Y);
~Thermos();

};



#endif // THERMOS_H_INCLUDED
