#ifndef MENU_H
#define MENU_H
#include <allegro.h>
#include "Instrucoes.h"

class Menu
{
private:
    BITMAP* buffer;
    BITMAP* bmp;
    BITMAP* bmp_instrucoes;
    BITMAP* bmp_selection;
    int pos_x;
    int pos_y;
    int select;
    bool jogo;


public:
        Menu();
        virtual ~Menu();

        void Set_menu(BITMAP* buffer, BITMAP* bmp);

        int Executar();
        void Print();
    protected:
    private:
};

#endif // MENU_H
