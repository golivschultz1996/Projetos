#pragma once
#include <allegro.h>

class Reward
{
private:
    float pos_x;
    float pos_y;
    float pos_y_aux;
    float vel_y;
    BITMAP* buffer;
    BITMAP* bmp;
    bool active;
    bool token;

public:
    Reward();
    virtual ~Reward();

    void Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp);
    void Set_token(bool token);

    void Active();
    void Animacao();
    void Print();

    bool Get_active();
    bool Get_token();
    float Get_pos_x();
    float Get_pos_y();
    BITMAP* Get_bmp();

    protected:
};

