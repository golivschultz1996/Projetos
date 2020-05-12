#ifndef INSTRUCOES_H
#define INSTRUCOES_H
#include <allegro.h>

class Instrucoes
{
private:
    BITMAP* buffer;
    BITMAP* bmp;
    float pos_x;
    float pos_y;

public:
        Instrucoes();
        virtual ~Instrucoes();

        void Set_instrucoes(BITMAP* buffer, BITMAP* bmp);

        void Executar();

        void Print();
    protected:
    private:
};

#endif // INSTRUCOES_H
