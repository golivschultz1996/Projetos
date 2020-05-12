
#include "Inimigo.h"
#include "Jogador.h"

Inimigo::Inimigo()
{

}

void Inimigo::Init(BITMAP* buffer, float pos_x, float pos_y, BITMAP* parado, BITMAP* morto){
    J = new Jogador();
    this->buffer = buffer;
    this->pos_x  = pos_x;
    this->pos_y  = pos_y;
    this->parado = parado;
    this->morto  = morto;
    this->alive  = true;

    int i;
    i = rand()%100;

    if(i%2 == 0){
        direction = 3;
    }else{
        direction = 1;
    }
    printf("%i", i);


}

Inimigo::~Inimigo()
{

}

void Inimigo::Set_alive(bool alive, int timer){
    this->alive = alive;
    if(alive == false){
        timer_aux = timer;
    }
}

int Inimigo::Update(std::list<Caixa>* caixa, std::list<Caixa>* tijolo, std::list<Obstaculo> esgoto, std::list<Escada> escada, Obstaculo* terreno, int timer, Jogador* P1, Jogador* P2){

    std::list<Caixa>::iterator i;
    std::list<Obstaculo>::iterator j;
    std::list<Escada>::iterator m;

    moved = false;

    if(alive == true){
        if(pixel_perfect_colision(pos_x, pos_y, parado, P1->Get_pos_x(), P1->Get_pos_y(), P1->Get_bmp_parado()) == TRUE){
            P1->Set_hurt(true);
            return 0;
        }else if(P2 != NULL){
            if(pixel_perfect_colision(pos_x, pos_y, parado, P2->Get_pos_x(), P2->Get_pos_y(), P2->Get_bmp_parado()) == TRUE){
                P2->Set_hurt(true);
                return 0;
            }
        }

        if(direction == 3){
            if(pos_y == 520 - parado->h){
                pos_x += 2;
                for(j = esgoto.begin();j != esgoto.end();j++){
                    if(pixel_perfect_colision(pos_x, pos_y, parado, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                        pos_x -= 2;
                        direction = 1;
                        break;
                    }
                }
                for(m = escada.begin();m != escada.end();m++){
                    if(pixel_perfect_colision(pos_x, pos_y, parado, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                        pos_x -= 2;
                        direction = 1;
                        break;
                    }
                }
                if(getpixel(terreno->Get_bmp(), pos_x + parado->w, 10) == makecol(255, 0, 255)){
                    pos_x -= 2;
                    direction = 1;
                }
            }else{
                for(i = caixa->begin();i != caixa->end();i++){
                    if(pos_x + parado->w > (*i).Get_pos_x()   &&   pos_x + parado->w < (*i).Get_pos_x() + (*i).Get_bmp()->w){
                        direction = 3;
                        pos_x += 2;
                        break;
                    }else{
                        if(moved == false){
                            pos_x -= 2;
                            moved = true;
                        }
                        direction = 1;
                    }
                }
                for(i = tijolo->begin();i != tijolo->end();i++){
                    if(pos_x + parado->w > (*i).Get_pos_x()   &&   pos_x + parado->w < (*i).Get_pos_x() + (*i).Get_bmp()->w){
                        direction = 3;
                        pos_x += 2;
                        break;
                    }else{
                        if(moved == false){
                            pos_x -= 2;
                            moved = true;
                        }
                        direction = 1;
                    }
                }
            }
        }else if(direction == 1){
            if(pos_y == 520 - parado->h){
                pos_x -= 2;
                for(j = esgoto.begin();j != esgoto.end();j++){
                    if(pixel_perfect_colision(pos_x, pos_y, parado, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                        pos_x += 2;
                        direction = 3;
                    }
                }
                for(m = escada.begin();m != escada.end();m++){
                    if(pixel_perfect_colision(pos_x, pos_y, parado, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                        pos_x += 2;
                        direction = 3;
                    }
                }
                if(getpixel(terreno->Get_bmp(), pos_x, 10) == makecol(255, 0, 255)){
                    pos_x += 2;
                    direction = 3;
                }
            }else{
                for(i = caixa->begin();i != caixa->end();i++){
                    if(pos_x > (*i).Get_pos_x()   &&   pos_x < (*i).Get_pos_x() + (*i).Get_bmp()->w){
                        direction = 1;
                        pos_x -= 2;
                        break;
                    }else{
                        if(moved == false){
                            pos_x += 2;
                            moved = true;
                        }
                        direction = 3;
                    }
                }
                for(i = tijolo->begin();i != tijolo->end();i++){
                    if(pos_x > (*i).Get_pos_x()   &&   pos_x < (*i).Get_pos_x() + (*i).Get_bmp()->w){
                        direction = 1;
                        pos_x -= 2;
                        break;
                    }else{
                        if(moved == false){
                            pos_x += 2;
                            moved = true;
                        }
                        direction = 3;
                    }
                }
            }
        }
    }else{
        pos_y = 520 - morto->h;
    }
    Print(timer);
}

void Inimigo::Print(int timer)
{

    if(alive == true){
        draw_sprite(buffer, parado, pos_x, pos_y);
    }else{
        if(timer - timer_aux < 2000){
            draw_sprite(buffer, morto, pos_x, pos_y);
        }
    }
}
