#pragma once
#include <allegro.h>
#include "Camera.h"
#include "Inimigo1.h"
#include "Jogador.h"
#include "Obstaculo.h"
#include "Escada.h"
#include "Caixa.h"
#include <iostream>
#include <list>
using namespace std;

class Fase1 : public Camera, Inimigo1 , Jogador
{
private:
    BITMAP* buffer;
    BITMAP* fase;
    BITMAP* moeda;
    BITMAP* cogumelo;
    BITMAP* star;
    BITMAP* coin;
    Jogador* Mario;
    Jogador* Luigi;
    Obstaculo* terreno;
    Reward reward;
    Fase1* prox;
    bool level_end;

    std::list<Inimigo>* Cogumelo;
    std::list<Caixa>* Caixa1;
    std::list<Caixa>* Tijolo;
    std::list<Obstaculo> Esgoto;
    std::list<Escada> Escada1;


public:
    Fase1();
    ~Fase1();

    void Set_fase(Fase1* prox,  BITMAP* buffer, BITMAP* fase, BITMAP* cogumelo, BITMAP* coin, BITMAP* star, Obstaculo* terreno, std::list<Inimigo>* Cogumelo, std::list<Caixa>* Caixa1, std::list<Caixa>* Tijolo, std::list<Obstaculo> Esgoto, std::list<Escada> Escada1,  Jogador* mario, int id = 1, Jogador* luigi = NULL);
    void Draw();
    int Executar(int timer_anim, int quant_jog);

    bool Get_level_end();
    Obstaculo* Get_terreno();

    Camera camera;

    Camera *cameraptr = &camera;



    //BITMAP* mapa1;
};
