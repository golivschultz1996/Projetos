#include "Escada.h"

Escada::Escada()
{
    //ctor
}

void Escada::Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp){
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->buffer = buffer;
    this->bmp    = bmp;
}

void Escada::Print(){
    draw_sprite(buffer, bmp, pos_x, pos_y);
}

Escada::~Escada()
{
    //dtor
}
