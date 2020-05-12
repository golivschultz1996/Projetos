#include "Caixa.h"

Caixa::Caixa()
{
    //ctor
}

void Caixa::Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp, bool coin, bool shroom, bool star, BITMAP* bmp_des){
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->pos_y_aux = pos_y;
    this->buffer= buffer;
    this->bmp   = bmp;
    this->coin  = coin;
    this->star  = star;
    this->shroom= shroom;
    this->bmp_des = bmp_des;
    active = false;
}

void Caixa::Active(){
    if(active == false){
        vel_y = -6;
        active = true;
        Animacao();
    }
}

void Caixa::Animacao(){
    vel_y += 0.6;
    pos_y += vel_y;

}

float Caixa::Get_pos_y_aux(){
    return pos_y_aux;
}

bool Caixa::Get_active(){
    return active;
}

bool Caixa::Get_coin(){
    return coin;
}

bool Caixa::Get_shroom(){
    return shroom;
}

bool Caixa::Get_star(){
    return star;
}

void Caixa::Print(){
    if(active == true){
        if(bmp_des != NULL){
            draw_sprite(buffer, bmp_des, pos_x, pos_y);
        }else{
            draw_sprite(buffer, bmp, pos_x, pos_y);
        }
    }else{
        draw_sprite(buffer, bmp, pos_x, pos_y);
    }
}

Caixa::~Caixa()
{
    //dtor
}
