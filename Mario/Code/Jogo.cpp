#include "Jogo.h"

volatile int timer_jogo;
void incrementa_timer_jogo() { timer_jogo++; }
END_OF_FUNCTION(incrementa_timer_jogo)

volatile int timer_anim;
void incrementa_timer_anim() { timer_anim++; }
END_OF_FUNCTION(incrementa_timer_anim)

Jogo::Jogo()
{
    fase1          = load_bitmap("fase1.bmp", NULL);
    fase2          = load_bitmap("fase2.bmp", NULL);
    terreno1       = load_bitmap("Terreno_mapa1.bmp", NULL);
    terreno2       = load_bitmap("Terreno_mapa2.bmp", NULL);
    Mario_parado   = load_bitmap("Mariopequeno_parado.bmp", NULL);
    Mario_direita  = load_bitmap("Mario_andando_direita.bmp", NULL);
    Mario_esquerda = load_bitmap("Mario_andando_esquerda.bmp", NULL);
    Mario_salto    = load_bitmap("Mariopequeno_salto.bmp", NULL);
    Luigi_parado   = load_bitmap("Luigipequeno_parado.bmp", NULL);
    Luigi_direita  = load_bitmap("Luigi_andando_direita.bmp", NULL);
    Luigi_esquerda = load_bitmap("Luigi_andando_esquerda.bmp", NULL);
    Luigi_salto    = load_bitmap("Luigipequeno_salto.bmp", NULL);
    inicogumelo    = load_bitmap("Inimigo1.bmp", NULL);
    inicogumelod   = load_bitmap("Inimigo1_dead.bmp", NULL);
    tunel1         = load_bitmap("Sprite_esgoto_pequeno.bmp", NULL);
    tunel2         = load_bitmap("Sprite_esgoto_medio.bmp", NULL);
    tunel3         = load_bitmap("Sprite_esgoto_grande.bmp", NULL);
    escadapd       = load_bitmap("Sprite_escada_pequena_direita.bmp", NULL);
    escadape       = load_bitmap("Sprite_escada_pequena_esquerda.bmp", NULL);
    escadagd       = load_bitmap("Sprite_escada_grande_direita.bmp", NULL);
    escadage       = load_bitmap("Sprite_escada_grande_esquerda.bmp", NULL);
    tijolo         = load_bitmap("Sprite_tijolo.bmp", NULL);
    caixa          = load_bitmap("Sprite_caixa_surpresa.bmp", NULL);
    caixad         = load_bitmap("Sprite_caixa_sem_surpresa.bmp", NULL);
    cogumelo       = load_bitmap("Cogumelo.bmp", NULL);
    coin           = load_bitmap("Coin.bmp", NULL);
    star           = load_bitmap("Star.bmp", NULL);
    srand((float)time(NULL));

}

void Jogo::Set_jogo(BITMAP* buffer, int quant_jog){
    this->quant_jog = quant_jog;
    this->buffer = buffer;
    Caixa cx[13];
    Caixa tj[30];
    Obstaculo esg[12];
    Escada esc[5];
    Inimigo cog[15];

    ///Mapa 1 ////////////////////////////////////////////////////////////////////////////////////////////////
    T1.Set_obst(0, 520, buffer, terreno1);

    int i;
    cx[0].Set_obst(640, 360, buffer, caixa, caixad);
    cx[1].Set_obst(840, 360, buffer, caixa, caixad, false, true, false);
    cx[2].Set_obst(920, 360, buffer, caixa, caixad);
    cx[3].Set_obst(880, 200, buffer, caixa, caixad);
    cx[4].Set_obst(2560, 320, buffer, caixa, caixad, false, true, false);
    cx[5].Set_obst(3120, 360, buffer, caixa, caixad, false, true, false);
    cx[6].Set_obst(3760, 200, buffer, caixa, caixad);
    cx[7].Set_obst(4240, 360, buffer, caixa, caixad);
    cx[8].Set_obst(4360, 360, buffer, caixa, caixad, false, true, false);
    cx[9].Set_obst(4480, 360, buffer, caixa, caixad);
    cx[10].Set_obst(4360, 200, buffer, caixa, caixad);
    cx[11].Set_obst(5160, 200, buffer, caixa, caixad);
    cx[12].Set_obst(6800, 360, buffer, caixa, caixad);

    tj[0].Set_obst(800,360, buffer, tijolo);
    tj[1].Set_obst(880,360, buffer, tijolo);
    tj[2].Set_obst(960,360, buffer, tijolo);
    tj[3].Set_obst(3080,360, buffer, tijolo);
    tj[4].Set_obst(3160,360, buffer, tijolo);
    tj[5].Set_obst(3200,200, buffer, tijolo);
    tj[6].Set_obst(3240,200, buffer, tijolo);
    tj[7].Set_obst(3280,200, buffer, tijolo);
    tj[8].Set_obst(3320,200, buffer, tijolo);
    tj[9].Set_obst(3360,200, buffer, tijolo);
    tj[10].Set_obst(3400,200, buffer, tijolo);
    tj[11].Set_obst(3440,200, buffer, tijolo);
    tj[12].Set_obst(3480,200, buffer, tijolo);
    tj[13].Set_obst(3640,200, buffer, tijolo);
    tj[14].Set_obst(3680,200, buffer, tijolo);
    tj[15].Set_obst(3720,200, buffer, tijolo);
    tj[16].Set_obst(3760,360, buffer, tijolo);
    tj[17].Set_obst(4000,360, buffer, tijolo);
    tj[18].Set_obst(4040,360, buffer, tijolo);
    tj[19].Set_obst(4720,360, buffer, tijolo);
    tj[20].Set_obst(4840,200, buffer, tijolo);
    tj[21].Set_obst(4880,200, buffer, tijolo);
    tj[22].Set_obst(4920,200, buffer, tijolo);
    tj[23].Set_obst(5120,200, buffer, tijolo);
    tj[24].Set_obst(5240,200, buffer, tijolo);
    tj[25].Set_obst(5160,360, buffer, tijolo);
    tj[26].Set_obst(5200,360, buffer, tijolo);
    tj[27].Set_obst(6720,360, buffer, tijolo);
    tj[28].Set_obst(6760,360, buffer, tijolo);
    tj[29].Set_obst(6840,360, buffer, tijolo);

    esg[0].Set_obst(1120, 520-tunel1->h, buffer, tunel1);
    esg[1].Set_obst(6520, 520-tunel1->h, buffer, tunel1);
    esg[2].Set_obst(7160, 520-tunel1->h, buffer, tunel1);
    esg[3].Set_obst(1520, 520-tunel2->h, buffer, tunel2);
    esg[4].Set_obst(1840, 520-tunel3->h, buffer, tunel3);
    esg[5].Set_obst(2280, 520-tunel3->h, buffer, tunel3);

    esc[0].Set_obst(5360, 520-escadape->h, buffer, escadape);
    esc[1].Set_obst(5600, 520-escadapd->h, buffer, escadapd);
    esc[2].Set_obst(5960, 520-escadape->h, buffer, escadape);
    esc[3].Set_obst(6200, 520-escadapd->h, buffer, escadapd);
    esc[4].Set_obst(7240, 520-escadage->h, buffer, escadage);

    cog[0].Init(buffer, 1600, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[1].Init(buffer, 2100, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[2].Init(buffer, 2040, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[3].Init(buffer, 3880, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[4].Init(buffer, 3940, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[5].Init(buffer, 4560, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[6].Init(buffer, 4620, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[7].Init(buffer, 4960, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[8].Init(buffer, 5020, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[9].Init(buffer, 5120, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[10].Init(buffer, 5180, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[11].Init(buffer, 6960, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[12].Init(buffer, 7020, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[13].Init(buffer, 3200, 200 - inicogumelo->h, inicogumelo, inicogumelod);
    cog[14].Init(buffer, 3280, 200 - inicogumelo->h, inicogumelo, inicogumelod);

    for(i = 0;i < 13; i++){
        Caixa1.push_back(cx[i]);
    }

    for(i = 0;i < 30; i++){
        Tijolo.push_back(tj[i]);
    }

    for(i = 0;i < 6; i++){
        Esgoto.push_back(esg[i]);
    }

    for(i = 0;i < 5; i++){
        Escada1.push_back(esc[i]);
    }

    for(i = 0;i < 15; i++){
        Cogumelo.push_back(cog[i]);
    }

    if(quant_jog == 1){
        Mario.Init(buffer, 200, 520 - Mario_parado->h, 1, 1, Mario_parado, Mario_direita, Mario_esquerda, Mario_salto);
        F1.Set_fase(&F2, buffer, fase1, cogumelo, coin, star, &T1, &Cogumelo, &Caixa1, &Tijolo, Esgoto, Escada1, &Mario);
    }else if(quant_jog == 2){
        Mario.Init(buffer, 200, 520 - Mario_parado->h, 1,2, Mario_parado, Mario_direita, Mario_esquerda, Mario_salto, &Luigi);
        Luigi.Init(buffer, 200, 520 - Luigi_parado->h, 2,2, Luigi_parado, Luigi_direita, Luigi_esquerda, Luigi_salto, &Mario);
        F1.Set_fase(&F2, buffer, fase1, cogumelo, coin, star, &T1, &Cogumelo, &Caixa1, &Tijolo, Esgoto, Escada1, &Mario, 2, &Luigi);
    }

    ///Mapa 2////////////////////////////////////////////////////////////////////////////////////////////
    Caixa cx2[21];
    Caixa tj2[33];
    Escada esc2[2];
    Obstaculo esg2[3];
    Inimigo cog2[10];

    T2.Set_obst(0, 514, buffer, terreno2);

    cx2[0].Set_obst(1170, 180, buffer, caixa, caixad);
    cx2[1].Set_obst(1170, 350, buffer, caixa, caixad, false, true, false);
    cx2[2].Set_obst(2220, 180, buffer, caixa, caixad, false, true, false);
    cx2[3].Set_obst(2260, 180, buffer, caixa, caixad);
    cx2[4].Set_obst(2300, 180, buffer, caixa, caixad);
    cx2[5].Set_obst(2340, 180, buffer, caixa, caixad);
    cx2[6].Set_obst(2380, 180, buffer, caixa, caixad);
    cx2[7].Set_obst(2220, 350, buffer, caixa, caixad);
    cx2[8].Set_obst(2260, 350, buffer, caixa, caixad);
    cx2[9].Set_obst(2300, 350, buffer, caixa, caixad);
    cx2[10].Set_obst(2340, 350, buffer, caixa, caixad);
    cx2[11].Set_obst(2380, 350, buffer, caixa, caixad);
    cx2[12].Set_obst(3310, 350, buffer, caixa, caixad);
    cx2[13].Set_obst(3350, 350, buffer, caixa, caixad);
    cx2[14].Set_obst(3390, 350, buffer, caixa, caixad);
    cx2[15].Set_obst(3430, 350, buffer, caixa, caixad);
    cx2[16].Set_obst(3560, 350, buffer, caixa, caixad);
    cx2[17].Set_obst(3600, 350, buffer, caixa, caixad);
    cx2[18].Set_obst(3640, 350, buffer, caixa, caixad);
    cx2[19].Set_obst(7125, 350, buffer, caixa, caixad);
    cx2[20].Set_obst(7800, 180, buffer, caixa, caixad, true, false, false);


    tj2[0].Set_obst(630, 350, buffer, tijolo);
    tj2[1].Set_obst(670, 350, buffer, tijolo, false, true, false);
    tj2[2].Set_obst(710, 350, buffer, tijolo);
    tj2[3].Set_obst(1210, 180, buffer, tijolo);
    tj2[4].Set_obst(1250, 180, buffer, tijolo);
    tj2[5].Set_obst(1290, 180, buffer, tijolo);
    tj2[6].Set_obst(2850, 350, buffer, tijolo);
    tj2[7].Set_obst(2890, 180, buffer, tijolo, false, false, true);
    tj2[8].Set_obst(2930, 180, buffer, tijolo);
    tj2[9].Set_obst(2970, 180, buffer, tijolo);
    tj2[10].Set_obst(3110, 180, buffer, tijolo);
    tj2[11].Set_obst(3390, 180, buffer, tijolo);
    tj2[12].Set_obst(3430, 180, buffer, tijolo);
    tj2[13].Set_obst(3470, 180, buffer, tijolo);
    tj2[14].Set_obst(3510, 180, buffer, tijolo);
    tj2[15].Set_obst(3550, 180, buffer, tijolo);
    tj2[16].Set_obst(3850, 180, buffer, tijolo);
    tj2[17].Set_obst(3890, 180, buffer, tijolo);
    tj2[18].Set_obst(3930, 180, buffer, tijolo);
    tj2[19].Set_obst(3970, 180, buffer, tijolo);
    tj2[20].Set_obst(5240, 180, buffer, tijolo, false, true, false);
    tj2[21].Set_obst(5280, 180, buffer, tijolo);
    tj2[22].Set_obst(5320, 180, buffer, tijolo);
    tj2[23].Set_obst(5360, 180, buffer, tijolo);
    tj2[24].Set_obst(6740, 350, buffer, tijolo, true, false, false);
    tj2[25].Set_obst(6870, 180, buffer, tijolo);
    tj2[26].Set_obst(6910, 180, buffer, tijolo);
    tj2[27].Set_obst(6950, 180, buffer, tijolo);
    tj2[28].Set_obst(6990, 180, buffer, tijolo);
    tj2[29].Set_obst(7030, 180, buffer, tijolo);
    tj2[30].Set_obst(7210, 180, buffer, tijolo, false, true, false);
    tj2[31].Set_obst(7750, 350, buffer, tijolo);
    tj2[32].Set_obst(7790, 350, buffer, tijolo);


    esc2[0].Set_obst(830, 516-escadape->h, buffer, escadape);
    esc2[1].Set_obst(1420, 516-escadapd->h, buffer, escadapd);

    esg2[0].Set_obst(1930, 516-tunel3->h, buffer, tunel3);
    esg2[1].Set_obst(3100, 516-tunel3->h, buffer, tunel3);
    esg2[2].Set_obst(5120, 516-tunel3->h, buffer, tunel3);

    cog2[0].Init(buffer, 2800, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[1].Init(buffer, 2320, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[2].Init(buffer, 3000, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[3].Init(buffer, 2300, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[4].Init(buffer, 3300, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[5].Init(buffer, 3500, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[6].Init(buffer, 5500, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[7].Init(buffer, 5300, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[8].Init(buffer, 1180, 520 - inicogumelo->h, inicogumelo, inicogumelod);
    cog2[9].Init(buffer, 1210, 520 - inicogumelo->h, inicogumelo, inicogumelod);

    for(i = 0;i < 21; i++){
        Caixa2.push_back(cx2[i]);
    }

    for(i = 0;i < 33; i++){
        Tijolo2.push_back(tj2[i]);
    }

    for(i = 0;i < 3; i++){
        Esgoto2.push_back(esg2[i]);
    }

    for(i = 0;i < 2; i++){
        Escada2.push_back(esc2[i]);
    }

    for(i = 0;i < 10; i++){
        Cogumelo2.push_back(cog2[i]);
    }


    if(quant_jog == 1){
        Mario.Init(buffer, 200, 520 - Mario_parado->h, 1,1, Mario_parado, Mario_direita, Mario_esquerda, Mario_salto);
        F2.Set_fase(NULL, buffer, fase2, cogumelo, coin, star, &T2, &Cogumelo2, &Caixa2, &Tijolo2, Esgoto2, Escada2, &Mario);
    }else if(quant_jog == 2){
        Mario.Init(buffer, 200, 520 - Mario_parado->h, 1,2, Mario_parado, Mario_direita, Mario_esquerda, Mario_salto, &Luigi);
        Luigi.Init(buffer, 200, 520 - Luigi_parado->h, 2,2, Luigi_parado, Luigi_direita, Luigi_esquerda, Luigi_salto, &Mario);
        F2.Set_fase(NULL, buffer, fase2, cogumelo, coin, star, &T2, &Cogumelo2, &Caixa2, &Tijolo2, Esgoto2, Escada2, &Mario, 2, &Luigi);
    }
}

int Jogo::Executar(){
    bool pause;
    pause = false;
    timer_jogo = 0;
    LOCK_FUNCTION(incrementa_timer_jogo);
    LOCK_VARIABLE(timer_jogo);
    install_int_ex(incrementa_timer_jogo, BPS_TO_TIMER(60));

    timer_anim = 0;
    LOCK_FUNCTION(incrementa_timer_anim);
    LOCK_VARIABLE(timer_anim);
    install_int_ex(incrementa_timer_anim, MSEC_TO_TIMER(1));

    while(!key[KEY_BACKSPACE]){
        while(timer_jogo > 0 && !key[KEY_ESC]){

            if(F1.Get_level_end() == false){
                F1.Executar(timer_anim, quant_jog);
            }else if(F2.Get_level_end() == false){
                F2.Executar(timer_anim, quant_jog);
            }
            if(Mario.Get_alive() == false || F2.Get_level_end() == true && quant_jog == 1){
                return 0;
            }else if(Luigi.Get_alive() == false || F2.Get_level_end() == true && quant_jog == 2){
                return 0;
            }

        timer_jogo--;
        }
    }
    return 0;
}

Jogo::~Jogo()
{
    //dtor
}
