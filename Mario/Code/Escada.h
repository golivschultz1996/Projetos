#ifndef ESCADA_H
#define ESCADA_H

#include "Obstaculo.h"


class Escada : public Obstaculo
{
    protected:
        int direction;
    public:
        Escada();
        virtual ~Escada();

        void Set_obst(float pos_x, float pos_y, BITMAP* buffer, BITMAP* bmp);

        void Print();
    private:
};

#endif // ESCADA_H
