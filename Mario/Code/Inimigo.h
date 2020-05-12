#pragma once
#include <allegro.h>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <stdio.h>
#include "Obstaculo.h"
#include "Escada.h"
#include "Caixa.h"
#include "Personagem.h"

using namespace std;

class Jogador;

class Inimigo : public Personagem
{
private:
    Jogador* J;

    bool moved;
    int timer_aux;

public:
    Inimigo();
    ~Inimigo();

    void Set_alive(bool alive, int timer);

    void Init(BITMAP* buffer, float pos_x, float pos_y, BITMAP* parado, BITMAP* morto);

    int Update(std::list<Caixa>* caixa, std::list<Caixa>* tijolo, std::list<Obstaculo> esgoto, std::list<Escada> escada, Obstaculo* terreno, int timer, Jogador* P1, Jogador* P2 = NULL);

    void Print(int timer);
};
