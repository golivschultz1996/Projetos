#pragma once
#include <allegro.h>
#include "Personagem.h"
#include "Obstaculo.h"
#include "Escada.h"
#include "Caixa.h"
#include <iostream>
#include <list>
using namespace std;

class Inimigo;

class Jogador : public Personagem
{
protected:
    Inimigo* I;
    bool big;
    bool hurt;
    bool jump;
    bool fall;
    volatile int timer_anim;
    bool colision;
    Jogador* P2;


public:
    //float pos_x;
    //float pos_y;
    float vel_y;
    Jogador();
    ~Jogador();

    void Init(BITMAP* buffer, float pos_x, float pos_y, int id, int quant_jog, BITMAP* parado, BITMAP* direita, BITMAP* esquerda, BITMAP* salt, Jogador* P2 = NULL);

    void Set_hurt(bool hurt);

    bool getjump();
    bool setjump(bool jump);
    virtual void Update(Obstaculo* terreno, int timer_anim, Reward* reward, std::list<Caixa>* caixa, std::list<Caixa>* tijolo, std::list<Obstaculo> esgoto, std::list<Escada> escada, std::list<Inimigo>* inimigo);
    virtual void Draw(BITMAP* boneco, int timer_anim);
    const float gravidade = 0.6;
    float jumpspeed;


};
