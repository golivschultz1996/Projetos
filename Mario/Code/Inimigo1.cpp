#include "Inimigo1.h"

Inimigo1::Inimigo1()
{

}
Inimigo1::~Inimigo1()
{
}
void Inimigo1::Init()
{
    pos_inimigo1_x = 1000;
}
void Inimigo1::Draw(BITMAP *buffer, BITMAP *inimigo1)
{
    draw_sprite (buffer, inimigo1, pos_inimigo1_x, 485);
   Update();
}
void Inimigo1::Update()
{
    pos_inimigo1_x = pos_inimigo1_x - 7;

}

