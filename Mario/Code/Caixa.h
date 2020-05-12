#ifndef CAIXA_H
#define CAIXA_H

#include "Obstaculo.h"
#include "Reward.h"


class Caixa : public Obstaculo
{
private:
    Reward* reward;
    BITMAP* bmp_des;
    bool active;
    bool coin;
    bool star;
    bool shroom;

    public:
        Caixa();
        virtual ~Caixa();

        void Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp, bool coin = false, bool shroom = false, bool star = false, BITMAP* bmp_des = NULL);

        void Active();
        void Animacao();
        void Print();

        float Get_pos_y_aux();
        bool Get_active();
        bool Get_shroom();
        bool Get_coin();
        bool Get_star();

    protected:
    private:
};

#endif // CAIXA_H
