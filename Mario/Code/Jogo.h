#ifndef JOGO_H
#define JOGO_H

#include "Jogador.h"
#include "Camera.h"
#include "Inimigo1.h"
#include "Personagem.h"
#include "fase1.h"
#include "Escada.h"
#include "Caixa.h"
#include "Menu.h"

class Jogo
{

private:
    BITMAP* buffer;
    BITMAP* fase1;
    BITMAP* fase2;
    BITMAP* terreno1;
    BITMAP* terreno2;
    BITMAP* Mario_parado;
    BITMAP* Mario_direita;
    BITMAP* Mario_esquerda;
    BITMAP* Mario_salto;
    BITMAP* Luigi_parado;
    BITMAP* Luigi_direita;
    BITMAP* Luigi_esquerda;
    BITMAP* Luigi_salto;
    BITMAP* inicogumelo;
    BITMAP* inicogumelod;
    BITMAP* cogumelo;
    BITMAP* coin;
    BITMAP* star;
    BITMAP* tunel1;
    BITMAP* tunel2;
    BITMAP* tunel3;
    BITMAP* escadapd;
    BITMAP* escadape;
    BITMAP* escadagd;
    BITMAP* escadage;
    BITMAP* tijolo;
    BITMAP* caixa;
    BITMAP* caixad;

    std::list<Inimigo> Cogumelo;
    std::list<Caixa> Caixa1;
    std::list<Caixa> Tijolo;
    std::list<Obstaculo> Esgoto;
    std::list<Escada> Escada1;

    std::list<Inimigo> Cogumelo2;
    std::list<Caixa> Caixa2;
    std::list<Caixa> Tijolo2;
    std::list<Obstaculo> Esgoto2;
    std::list<Escada> Escada2;

    Fase1 F1;
    Fase1 F2;
    Obstaculo T1;
    Obstaculo T2;
    Jogador Mario;
    Jogador Luigi;
    int quant_jog;


    public:
        Jogo();
        virtual ~Jogo();

        void Set_jogo(BITMAP* buffer, int quant_jog);

        int Executar();
    protected:
};

#endif // JOGO_H
