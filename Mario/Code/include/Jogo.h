#ifndef JOGO_H
#define JOGO_H
#include "Fase1.h"

class Jogo
{

private:
    BITMAP* buffer;
    BITMAP* fase1;
    BITMAP* Mario_parado;
    BITMAP* inimigo1;
    BITMAP* tunel1;
    BITMAP* tijolo;

    Fase1 F1;


    public:
        Jogo();
        virtual ~Jogo();

        void Set_jogo();
        void Executar();
    protected:
};

#endif // JOGO_H
