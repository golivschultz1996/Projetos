#pragma once
#include <allegro.h>

class Personagem
{
protected:
    BITMAP* buffer;
    BITMAP* parado;
    BITMAP* direita;
    BITMAP* esquerda;
    BITMAP* salto;
    BITMAP* morto;
    int direction;
    float pos_x;
    float pos_y;
    bool alive;
    int id;
    int quant_jog;


public:
    Personagem();
    ~Personagem();
    virtual void Init(BITMAP* buffer, float pos_x, float pos_y, int id, BITMAP* parado, BITMAP* direita, BITMAP* esquerda, BITMAP* salto);

    virtual void Update(BITMAP *buffer, BITMAP *mario);
    virtual void Draw(BITMAP *buffer, BITMAP *mario);

    void Set_pos_x(float pos_x);

    float Get_pos_x();
    float Get_pos_y();
    bool Get_alive();
    BITMAP* Get_bmp_parado();

    int min(int a, int b);
    int max(int a, int b);
    int pixel_perfect_colision(int x1, int y1, BITMAP* obj1, int x2, int y2, BITMAP* obj2);
protected:

};
