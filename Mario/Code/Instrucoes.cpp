#include "Instrucoes.h"

Instrucoes::Instrucoes()
{
    //ctor
}

void Instrucoes::Set_instrucoes(BITMAP* buffer, BITMAP* bmp){
    this->buffer = buffer;
    this->bmp    = bmp;
    pos_x        = 0;
    pos_y        = 0;
}

void Instrucoes::Executar(){
    Print();
    while(!key[KEY_BACKSPACE]){

    }
}

void Instrucoes::Print(){
    draw_sprite(screen, bmp, pos_x, pos_y);
}

Instrucoes::~Instrucoes()
{
    //dtor
}
