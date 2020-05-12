#include "fase1.h"

Fase1::Fase1()
{

}


void Fase1::Set_fase(Fase1* prox, BITMAP* buffer, BITMAP* fase, BITMAP* cogumelo, BITMAP* coin, BITMAP* star, Obstaculo* terreno, std::list<Inimigo>* Cogumelo, std::list<Caixa>* Caixa1, std::list<Caixa>* Tijolo, std::list<Obstaculo> Esgoto, std::list<Escada> Escada1, Jogador* mario, int id, Jogador* luigi){
    this->Mario     = mario;
    this->Luigi     = luigi;
    this->terreno   = terreno;
    this->buffer    = buffer;
    this->fase      = fase;
    this->Cogumelo  = Cogumelo;
    this->Caixa1    = Caixa1;
    this->Tijolo    = Tijolo;
    this->Esgoto    = Esgoto;
    this->Escada1   = Escada1;
    this->cogumelo  = cogumelo;
    this->coin      = coin;
    this->star      = star;
    this->level_end = false;
    camera.Init();
}

Fase1::~Fase1()
{

}


int Fase1::Executar(int timer_anim, int quant_jog)
{
    std::list<Inimigo>::iterator l;
    std::list<Caixa>::iterator i;
    std::list<Escada>::iterator u;
    std::list<Obstaculo>::iterator m;

    if(fase != NULL)
        draw_sprite(buffer, fase, 0, 0);

    if(quant_jog == 1){
        Mario->Update(terreno, timer_anim, &reward, Caixa1, Tijolo, Esgoto, Escada1, Cogumelo);
    }else if(quant_jog == 2){
        Mario->Update(terreno, timer_anim, &reward, Caixa1, Tijolo, Esgoto, Escada1, Cogumelo);
        Luigi->Update(terreno, timer_anim, &reward, Caixa1, Tijolo, Esgoto, Escada1, Cogumelo);
    }


    if(reward.Get_active() == true && reward.Get_token() == false){
        reward.Animacao();
    }

    for(i = Caixa1->begin(); i != Caixa1->end(); i++){
        if((*i).Get_active() == true){
            if((*i).Get_shroom() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, cogumelo);
                reward.Active();
            }else if((*i).Get_coin() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, coin);
                reward.Active();
            }else if((*i).Get_star() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, star);
                reward.Active();
            }
            if((*i).Get_pos_y() != (*i).Get_pos_y_aux()){
                (*i).Animacao();
            }
        }
        (*i).Print();
    }

    for(i = Tijolo->begin(); i != Tijolo->end(); i++){
        if((*i).Get_active() == true){
            if((*i).Get_shroom() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, cogumelo);
                reward.Active();
            }else if((*i).Get_coin() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, coin);
                reward.Active();
            }else if((*i).Get_star() == true && reward.Get_active() == false){
                reward.Set_obst((*i).Get_pos_x(), (*i).Get_pos_y(), buffer, star);
                reward.Active();
            }
            if((*i).Get_pos_y_aux() != (*i).Get_pos_y()){
                (*i).Animacao();
            }
        }
        (*i).Print();
    }

    for(m = Esgoto.begin(); m != Esgoto.end(); m++){
        (*m).Print();
    }

    for(u = Escada1.begin(); u != Escada1.end(); u++){
        (*u).Print();
    }

    for(l = Cogumelo->begin(); l != Cogumelo->end(); l++){
        if(quant_jog == 1){
            (*l).Update(Caixa1, Tijolo, Esgoto, Escada1, terreno, timer_anim, Mario);
        }else if(quant_jog == 2){
            (*l).Update(Caixa1, Tijolo, Esgoto, Escada1, terreno, timer_anim, Mario, Luigi);
        }
    }

    if(Mario->Get_pos_x() > 8300){
        level_end = true;
        if(prox != NULL){
            if(quant_jog == 1){
                Mario->Set_pos_x(514);
            }else if(quant_jog == 2){
                Mario->Set_pos_x(514);
                Luigi->Set_pos_x(514);
            }
        }else{
            return 0;
        }
    }

    if(quant_jog == 2){
        if(Mario->Get_pos_x() > Luigi->Get_pos_x()){
            cameraptr->Update(Mario->Get_pos_x() - (Mario->Get_pos_x() - Luigi->Get_pos_x())/2);
        }else{
                cameraptr->Update(Luigi->Get_pos_x() - (Luigi->Get_pos_x() - Mario->Get_pos_x())/2);
        }
    }else{
        cameraptr->Update(Mario->Get_pos_x());
    }

    cameraptr->Draw(buffer);

}

bool Fase1::Get_level_end(){
    return level_end;
}

Obstaculo* Fase1::Get_terreno(){
    return terreno;
}


