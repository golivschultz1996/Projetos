#pragma once
#include <allegro.h>



class Obstaculo
{
protected:
    float pos_x;
    float pos_y;
    float vel_y;
    float pos_y_aux;
    BITMAP* buffer;
    BITMAP* bmp;

public:
        Obstaculo();
        virtual ~Obstaculo();

        virtual void Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp);

        float Get_pos_x();
        float Get_pos_y();
        bool Get_active();
        BITMAP* Get_bmp();

        virtual void Print();

};

