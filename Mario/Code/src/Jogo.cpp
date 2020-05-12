#include "Jogo.h"

Jogo::Jogo()
{
    buffer         = create_bitmap(8400, SCREEN_H);
    fase1          = load_bitmap("fase1.bmp", NULL);
    Mario_parado   = load_bitmap("Mariopequeno_parado.bmp", NULL);
    inimigo1       = load_bitmap("Inimigo1.bmp", NULL);
    tunel1         = load_bitmap ("Sprite_esgoto_pequeno.bmp", NULL);
    tijolo         = load_bitmap("Sprite_tijolo.bmp", NULL);
}

void Jogo::Set_jogo(){
     F1.init(buffer, fase1, Mario_parado, inimigo1, tunel1, tijolo);
}

void Jogo::Executar(){

}

Jogo::~Jogo()
{
    //dtor
}
