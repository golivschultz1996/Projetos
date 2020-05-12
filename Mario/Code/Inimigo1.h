#pragma once
#include <allegro.h>
#include "Inimigo.h"
class Inimigo1 : public Inimigo
{
public:
    Inimigo1();
    ~Inimigo1();
    float pos_inimigo1_x;

    virtual void Draw(BITMAP *buffer, BITMAP *inimigo1);
    virtual void Update();

    void Init();
};
