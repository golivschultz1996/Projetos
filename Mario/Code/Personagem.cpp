#include "Personagem.h"

Personagem::Personagem()
{

}
Personagem::~Personagem()
{

}
void Personagem::Update(BITMAP *buffer, BITMAP *mario){

}
void Personagem::Draw(BITMAP *buffer, BITMAP *mario)
{

}

void Personagem::Init(BITMAP* buffer, float pos_x, float pos_y, int id, BITMAP* parado, BITMAP* direita, BITMAP* esquerda, BITMAP* salto){
    this->id        = id;
    this->buffer    = buffer;
    this->pos_x     = pos_x;
    this->pos_y     = pos_y;
    this->parado    = parado;
    this->direita   = direita;
    this->esquerda  = esquerda;
    this->salto     = salto;
    this->direction = 3;
    alive           = true;
}

void Personagem::Set_pos_x(float pos_x){
    this->pos_x = pos_x;
}

float Personagem::Get_pos_x(){
    return pos_x;
}

float Personagem::Get_pos_y(){
    return pos_y;
}

bool Personagem::Get_alive(){
    return alive;
}

BITMAP* Personagem::Get_bmp_parado(){
    return parado;
}

int Personagem::min(int a, int b)
{
  if(a <= b)
   return a;
  else
   return b;
}

int Personagem::max(int a, int b)
{
  if(a >= b)
   return a;
  else
   return b;
}


///M�TODO PIXEL PERFECT
int Personagem::pixel_perfect_colision(int x1, int y1, BITMAP* obj1, int x2, int y2, BITMAP* obj2)
{
   int i, j;
   int colisao = FALSE;

   //Se os ret�ngulos estiverem se intersectando
   if(!( (x1 > x2 + obj2->w) || (y1 > y2 + obj2->h) || (x2 > x1 + obj1->w) || (y2 > y1 + obj1->h ) ))
   {
     int cima = max(y1, y2);
 	 int baixo = min(y1 + obj1->h, y2 + obj2->h);
	 int esquerda = max(x1, x2);
     int direita = min(x1 + obj1->w, x2 + obj2->w);

	 for(i = cima; i < baixo && !colisao; i++)
	 {
		for(j = esquerda; j < direita && !colisao; j++)
		{
		  if(getpixel(obj1, j-x1, i-y1) != makecol(255, 0, 255) && getpixel(obj2, j-x2, i-y2) != makecol(255, 0, 255))
           colisao = TRUE;
		}
	 }
   }

   return colisao;
}
