#include "Obstaculo.h"

Obstaculo::Obstaculo()
{
    //ctor
}

void Obstaculo::Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp){
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->pos_y_aux = pos_y;
    this->buffer= buffer;
    this->bmp   = bmp;
}

void Obstaculo::Print(){
    draw_sprite(buffer, bmp, pos_x, pos_y);
}

float Obstaculo::Get_pos_x(){
    return pos_x;
}

float Obstaculo::Get_pos_y(){
    return pos_y;
}

BITMAP* Obstaculo::Get_bmp(){
    return bmp;
}

Obstaculo::~Obstaculo()
{
    //dtor
}
