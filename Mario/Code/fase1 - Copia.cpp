#include "fase1.h"
#include "Jogador.h"
#include "Camera.h"
#include "Inimigo.h"

Fase1::Fase1()
{

}
Fase1::~Fase1()
{

}
void Fase1::Draw(BITMAP *buffer, BITMAP *mapa1, BITMAP *mario, BITMAP *inimigo1)
{

      draw_sprite(buffer,mapa1, 0, 0);
      jogador1ptr->Draw(buffer, mario);
      primeiroinimigoptr->Draw(buffer, inimigo1);
      cameraptr->Update(jogador1.getpos_x());
      jogador1ptr->Update(buffer, mario);
      cameraptr->Draw(buffer);

}
void Fase1::ColisaoMapa()
{
    if (bounding_box_collision(jogador1ptr->getpos_x(), jogador1ptr->getpos_y , 32, 40, 500, 500 , 77,78) == true)
        //jogador1ptr->setpos_x(300);

}
void Fase1::Init()
{

    jogador1.Init();
    camera.Init();
    primeiroinimigo.Init();



    fase1 = load_bitmap("fase1.bmp", NULL);
    mario = load_bitmap("Mariopequeno_parado.bmp", NULL);
    inimigo1 = load_bitmap("Inimigo1.bmp", NULL);

}
void Fase1::Executar(BITMAP *buffer)
{
    Draw(buffer, fase1, mario, inimigo1);
    ColisaoMapa();
}
int Fase1::bounding_box_collision(float x1, float y1, float w1, float h1, float x2, float y2, float w2, float h2)
{
    if( (x1 > x2 + w2) || (y1 > y2 + h2) || (x2 > x1 + w1) || (y2 > y1 + h1) )
     return FALSE;
    else
     return TRUE;
}


