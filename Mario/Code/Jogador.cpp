#include "Jogador.h"
#include "Inimigo.h"

Jogador::Jogador()
{
    I = new Inimigo();
    jumpspeed  = 15;
    jump       = false;
}

Jogador::~Jogador()
{

}

void Jogador::Init(BITMAP* buffer, float pos_x, float pos_y, int id, int quant_joga, BITMAP* parado, BITMAP* direita, BITMAP* esquerda, BITMAP* salto, Jogador* P2){
    this->P2        = P2;
    this->quant_jog = quant_jog;
    this->id        = id;
    this->buffer    = buffer;
    this->pos_x     = pos_x;
    this->pos_y     = pos_y;
    this->parado    = parado;
    this->direita   = direita;
    this->esquerda  = esquerda;
    this->salto     = salto;
    this->direction = 3;
    alive           = true;
    big             = false;
}

void Jogador::Set_hurt(bool hurt){
    this->hurt = hurt;
    if(this->hurt == true){
        if(big == false){
            alive = false;
        }else{
            pos_x = 200;
            big   = false;
        }
        hurt = false;
    }
}

void Jogador::Update(Obstaculo* terreno, int timer_anim, Reward* reward, std::list<Caixa>* caixa, std::list<Caixa>* tijolo, std::list<Obstaculo> esgoto, std::list<Escada> escada, std::list<Inimigo>* inimigo)
{
    std::list<Caixa>::iterator i;
    std::list<Caixa>::iterator j;
    std::list<Obstaculo>::iterator l;
    std::list<Escada>::iterator m;
    std::list<Inimigo>::iterator k;

    if(reward->Get_active() == true){
        if(pixel_perfect_colision(pos_x, pos_y, parado, reward->Get_pos_x(), reward->Get_pos_y(), reward->Get_bmp()) == TRUE){
            reward->Set_token(true);
            big = true;
        }
    }

    ///MOVIMENTO
    if(((key[KEY_RIGHT] && id == 1) || (key[KEY_D] && id == 2))&& pos_x < 8960 - parado->w && pos_y < 535){
        pos_x    += 10;
        direction = 3;

        if(pixel_perfect_colision(pos_x, pos_y, direita, terreno->Get_pos_x(), terreno->Get_pos_y(), terreno->Get_bmp()) == TRUE){
            pos_x-= 10;
        }
        for(i = caixa->begin(); i != caixa->end(); i++){
            if((*i).Get_pos_x() < pos_x + 20 || (*i).Get_pos_x() > pos_x - 20){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*i).Get_pos_x(), (*i).Get_pos_y(), (*i).Get_bmp()) == TRUE){
                    pos_x    -= 10;
                    break;
                }
            }
        }
        for(j = tijolo->begin(); j != tijolo->end(); j++){
            if((*j).Get_pos_x() < pos_x + 20 || (*j).Get_pos_x() > pos_x - 20){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                    pos_x    -= 10;
                    break;
                }
            }
        }
        for(l = esgoto.begin(); l != esgoto.end(); l++){
            if((*l).Get_pos_x() < pos_x + 20 || (*l).Get_pos_x() > pos_x - 20){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*l).Get_pos_x(), (*l).Get_pos_y(), (*l).Get_bmp()) == TRUE){
                    pos_x    -= 10;
                    break;
                }
            }
        }
        for(m = escada.begin(); m != escada.end(); m++){
            if((*m).Get_pos_x() < pos_x + 20 || (*m).Get_pos_x() > pos_x - 20){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                    pos_x    -= 10;
                    break;
                }
            }
        }
        if(((key[KEY_UP] && id == 1) || (key[KEY_W] && id == 2)) && jump == false && fall == false){
            jump  = true;
            vel_y = -jumpspeed;
        }
    }else if(((key[KEY_LEFT] && id == 1) || (key[KEY_A] && id == 2)) && pos_x > 0 && pos_y < 535){
        pos_x    -= 10;
        direction = 1;

        if(pixel_perfect_colision(pos_x, pos_y, esquerda, terreno->Get_pos_x(), terreno->Get_pos_y(), terreno->Get_bmp()) == TRUE){
            pos_x+= 10;
        }
        for(i = caixa->begin(); i != caixa->end(); i++){
            if(pixel_perfect_colision(pos_x, pos_y, salto, (*i).Get_pos_x(), (*i).Get_pos_y(), (*i).Get_bmp()) == TRUE){
                pos_x    += 10;
                break;
            }
        }
        for(j = tijolo->begin(); j != tijolo->end(); j++){
            if(pixel_perfect_colision(pos_x, pos_y, salto, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                pos_x    += 10;
                break;
            }
        }
        for(l = esgoto.begin(); l != esgoto.end(); l++){
            if(pixel_perfect_colision(pos_x, pos_y, salto, (*l).Get_pos_x(), (*l).Get_pos_y(), (*l).Get_bmp()) == TRUE){
                pos_x    += 10;
                break;
            }
        }
        for(m = escada.begin(); m != escada.end(); m++){
            if(pixel_perfect_colision(pos_x, pos_y, salto, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                pos_x    += 10;
                break;
            }
        }
        if (((key[KEY_UP] && id == 1) || (key[KEY_W] && id == 2)) && jump == false && fall == false)
        {
            jump = true;
            vel_y = -jumpspeed;
        }
    }else if(((key[KEY_UP] && id == 1) || (key[KEY_W] && id == 2)) && jump == false && fall == false && pos_y < 535){
        jump  = true;
        vel_y = -jumpspeed;
    }

    ///PULO
    if(jump == true && fall == false){
        vel_y += gravidade;
        pos_y += vel_y;

        if(pixel_perfect_colision(pos_x, pos_y, parado, terreno->Get_pos_x(), terreno->Get_pos_y(), terreno->Get_bmp()) == TRUE){
            pos_y  = terreno->Get_pos_y() - parado->h;
            fall = false;
            jump = false;
        }else{
            for(i = caixa->begin(); i != caixa->end(); i++){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*i).Get_pos_x(), (*i).Get_pos_y(), (*i).Get_bmp()) == TRUE){
                    if((*i).Get_pos_y() < pos_y){
                        (*i).Active();
                        vel_y = -vel_y;
                        jump  = false;
                        fall  = true;
                        break;
                    }else{
                        pos_y  = (*i).Get_pos_y() - parado->h;
                        jump   = false;
                        break;
                    }
                }
            }
            if(jump == true){
                for(j = tijolo->begin(); j != tijolo->end(); j++){
                    if(pixel_perfect_colision(pos_x, pos_y, salto, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                        if((*j).Get_pos_y() < pos_y){
                            (*j).Active();
                            vel_y = -vel_y;
                            jump  = false;
                            fall  = true;
                            break;
                        }else{
                            pos_y  = (*j).Get_pos_y() - parado->h;
                            jump   = false;
                            break;
                        }
                    }
                }
            }
            if(jump == true){
                for(l = esgoto.begin(); l != esgoto.end(); l++){
                    if(pixel_perfect_colision(pos_x, pos_y, salto, (*l).Get_pos_x(), (*l).Get_pos_y(), (*l).Get_bmp()) == TRUE){
                        pos_y  = (*l).Get_pos_y() - parado->h;
                        jump   = false;
                        break;
                    }
                }
            }
            if(jump == true){
                for(m = escada.begin(); m != escada.end(); m++){
                    if(pixel_perfect_colision(pos_x, pos_y, salto, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                        pos_y -= vel_y;
                        jump = false;
                        break;
                    }
                }
            }
            if(jump == true){
                for(k = inimigo->begin();k != inimigo->end(); k++){
                    if((*k).Get_alive() == true){
                        if(pixel_perfect_colision(pos_x, pos_y, salto, (*k).Get_pos_x(), (*k).Get_pos_y(), (*k).Get_bmp_parado()) == TRUE){
                            if(pos_y < (*k).Get_pos_y()){
                                (*k).Set_alive(false, timer_anim);
                            }
                        }
                    }
                }
            }
        }

        if(direction == 3 || direction == 4){
            draw_sprite(buffer, salto, pos_x, pos_y);
        }else if(direction == 1 || direction == 2){
            draw_sprite_h_flip(buffer, salto, pos_x, pos_y);
        }
    }else{ ///IMPRESSÃO DE SPRITES, CASO PULO SEJA "FALSE"
        if(direction == 1){
            Draw(esquerda, timer_anim);
            direction = 2;
        }else if(direction == 3){
            Draw(direita, timer_anim);
            direction = 4;
        }else if(direction == 2){
            draw_sprite_h_flip(buffer, parado, pos_x, pos_y);
        }else if(direction == 4){
            draw_sprite(buffer, parado, pos_x, pos_y);
        }
    }
    if(fall == true && jump == false){
        vel_y += gravidade;
        pos_y += vel_y;

        if(pixel_perfect_colision(pos_x, pos_y+1, parado, terreno->Get_pos_x(), terreno->Get_pos_y(), terreno->Get_bmp()) == TRUE){
            pos_y  = terreno->Get_pos_y() - parado->h;
            fall = false;
            jump = false;
        }else{
            for(i = caixa->begin(); i != caixa->end(); i++){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*i).Get_pos_x(), (*i).Get_pos_y(), (*i).Get_bmp()) == TRUE){
                    if((*i).Get_pos_y() > pos_y){
                        pos_y = (*i).Get_pos_y() - parado->h;
                    }
                    fall = false;
                    jump = false;
                    colision = true;
                }
            }

            for(j = tijolo->begin(); j != tijolo->end(); j++){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == TRUE){
                    if((*j).Get_pos_y() > pos_y){
                        pos_y = (*j).Get_pos_y() - parado->h;
                    }
                    fall = false;
                    jump = false;
                }
            }

            for(l = esgoto.begin(); l != esgoto.end(); l++){
                if(pixel_perfect_colision(pos_x, pos_y, parado, (*l).Get_pos_x(), (*l).Get_pos_y(), (*l).Get_bmp()) == TRUE){
                    pos_y = (*l).Get_pos_y() - parado->h;
                    fall = false;
                    jump = false;
                }
            }
            for(m = escada.begin(); m != escada.end(); m++){
                if(pixel_perfect_colision(pos_x, pos_y, parado, (*m).Get_pos_x(), (*m).Get_pos_y(), (*m).Get_bmp()) == TRUE){
                    pos_y -= vel_y;
                    fall  = false;
                    break;
                }
            }
            for(k = inimigo->begin();k != inimigo->end(); k++){
                if((*k).Get_alive() == true){
                    if(pixel_perfect_colision(pos_x, pos_y, salto, (*k).Get_pos_x(), (*k).Get_pos_y(), (*k).Get_bmp_parado()) == TRUE){
                        if(pos_y < (*k).Get_pos_y()){
                            (*k).Set_alive(false, timer_anim);
                        }
                    }
                }
            }
        }
    }else if(jump == false){
        if(pixel_perfect_colision(pos_x, pos_y, parado, terreno->Get_pos_x(), terreno->Get_pos_y(), terreno->Get_bmp()) == FALSE){
            vel_y = 0;
            fall = true;
        }else{
            for(i = caixa->begin(); i != caixa->end(); i++){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*i).Get_pos_x(), (*i).Get_pos_y(), (*i).Get_bmp()) == FALSE){
                    vel_y = 0;
                    fall = true;
                }
            }
            for(j = tijolo->begin(); j != tijolo->end(); j++){
                if(pixel_perfect_colision(pos_x, pos_y, salto, (*j).Get_pos_x(), (*j).Get_pos_y(), (*j).Get_bmp()) == FALSE){
                    vel_y = 0;
                    fall = true;
                }
            }
            for(l = esgoto.begin(); l != esgoto.end(); l++){
                if(pixel_perfect_colision(pos_x, pos_y, parado, (*l).Get_pos_x(), (*l).Get_pos_y(), (*l).Get_bmp()) == FALSE){
                    vel_y = 0;
                    fall = true;
                }
            }
        }
    }
}

void Jogador::Draw(BITMAP* boneco, int timer_anim)
{
    int num_frames  = 3;
    int frame_w     = boneco->w / num_frames;
    int frame_atual;
    int tempo_troca = 75;
    frame_atual     = (timer_anim / tempo_troca) % num_frames;
    masked_blit(boneco, buffer, frame_atual*frame_w, 0, pos_x, pos_y, frame_w, boneco->h);

}

bool Jogador::getjump()
{
    return jump;
}

