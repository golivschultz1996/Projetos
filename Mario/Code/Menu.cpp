#include "Menu.h"
#include "Jogo.h"

Menu::Menu()
{
    //ctor
}

void Menu::Set_menu(BITMAP* buffer, BITMAP* bmp){
    this->buffer = buffer;
    this->bmp    = bmp;
    pos_x        = 0;
    pos_y        = 0;
    bmp_instrucoes = load_bitmap("Instrucoes_sprite.bmp", NULL);
    bmp_selection= load_bitmap("Selection.bmp", NULL);
}

int Menu::Executar(){
    while(!key[KEY_ESC]){
        Print();
        if(key[KEY_SPACE]){
            jogo = true;
            draw_sprite(screen, bmp_selection, 0, 0);
            while(!key[KEY_BACKSPACE]){
                if(key[KEY_1]){
                    Jogo J;
                    J.Set_jogo(buffer, 1);
                    J.Executar();
                }else if(key[KEY_2]){
                    Jogo J;
                    J.Set_jogo(buffer, 2);
                    J.Executar();
                }
            }
        }else if(key[KEY_2]){
            Instrucoes I;
            I.Set_instrucoes(buffer, bmp_instrucoes);
            I.Executar();
        }
    }
}

void Menu::Print(){
    draw_sprite(screen, bmp, pos_x, pos_y);
}

Menu::~Menu()
{
    //dtor
}
