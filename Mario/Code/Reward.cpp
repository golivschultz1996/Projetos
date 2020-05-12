#include "Reward.h"

Reward::Reward()
{
    active = false;
}

void Reward::Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp){
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    this->pos_y_aux = pos_y;
    this->buffer= buffer;
    this->bmp   = bmp;
    this->active      = false;
    this->token = false;
}

void Reward::Active(){
    if(active == false){
        vel_y = -10;
        active = true;
        token = false;
    }
}

void Reward::Animacao(){
    if(vel_y < 0 || pos_y < pos_y_aux - bmp->h){
        vel_y += 0.5;
        pos_y += vel_y;
    }
    if(token == true){
        active = false;
    }else{
        Print();
    }
}

void Reward::Set_token(bool token){
    this->token = token;
}

bool Reward::Get_active(){
    return active;
}

bool Reward::Get_token(){
    return token;
}

float Reward::Get_pos_x(){
    return pos_x;
}

float Reward::Get_pos_y(){
    return pos_y;
}

BITMAP* Reward::Get_bmp(){
    return bmp;
}

void Reward::Print(){
    draw_sprite(buffer, bmp, pos_x, pos_y);
}

Reward::~Reward()
{
    //dtor
}
