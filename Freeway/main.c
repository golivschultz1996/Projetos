#include <allegro.h>
int exit_program = FALSE;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

volatile int timer;
void incrementa_timer(){timer++;}
END_OF_FUNCTION(incrementa_timer)
float bounding_box_collision(float x1, float y1 , float w1 , float h1, float x2 , float y2 , float w2 , float h2)
{
    if ((x1> x2 + w2) || (y1 > y2 + h2) || (x2>x1 + w1) || (y2 > y1 + h1))
        return FALSE;
        else
            return TRUE;


}
void sleep (time_t delay)
{
    time_t timer0, timer1;
    time(&timer0);
    do
    {
        time(&timer1);



    } while((timer1-timer0)< delay);

}
struct usuarios{

    char nome[100];
    int pontuacao;
};
char letras ()
{
    char c;
    scanf("%s", &c);
    return c;
}

void ranking()
{
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* telarosa = load_bitmap ("telarosa.bmp",NULL);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);
    FONT* fixedsys3 = load_font ("fixedsys3.pcx", NULL, NULL);
    char teste[5];
    teste[0] = ' '; teste[1] = ' '; teste[2] = ' ';
    char abecedario[]="a b c d e f g h i j k l m n o p q r s t u v x z";
    int i=0, total=-1, dig = 1, j;


    struct usuarios user[5];


   while (!exit_program)
   {
        if (key[KEY_ESC])
        {
            menujogo();
        }
        if (key[KEY_A])
        {

            if(dig==1)
            {
            teste[0] = 'a';

            sleep(1);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'a';

            sleep(1);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'a';

            sleep(1);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'a';

                sleep(1);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'a';

                sleep(1);
                dig++;
            }


        }

        if (key[KEY_B])
        {

            if(dig==1)
            {
            teste[0] = 'b';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'b';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'b';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'b';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'b';

                sleep(1-1/2);
                dig++;
            }
        }

             if (key[KEY_C])
        {

            if(dig==1)
            {
            teste[0] = 'c';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'c';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'c';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'c';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'c';

                sleep(1-1/2);
                dig++;
            }
        }
         if (key[KEY_D])
        {

            if(dig==1)
            {
            teste[0] = 'd';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'd';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'd';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'd';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'd';

                sleep(1-1/2);
                dig++;
            }
        }
        if (key[KEY_E])
        {

            if(dig==1)
            {
            teste[0] = 'e';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'e';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'e';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'e';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'e';

                sleep(1-1/2);
                dig++;
            }
        }
        if (key[KEY_F])
        {

            if(dig==1)
            {
            teste[0] = 'f';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'f';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'f';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'f';

                sleep(1-1/2);
                dig++;
            }

            else if (dig==5)
            {
                teste[4] = 'f';

                sleep(1-1/2);
                dig++;
            }
        }

        if (key[KEY_G])
        {

            if(dig==1)
            {
            teste[0] = 'g';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'g';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'g';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'g';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'g';

                sleep(1-1/2);
                dig++;
            }
        }

        if (key[KEY_H])
        {

            if(dig==1)
            {
            teste[0] = 'h';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'h';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'h';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'h';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'h';

                sleep(1-1/2);
                dig++;
            }
        }

        if (key[KEY_I])
        {

            if(dig==1)
            {
            teste[0] = 'i';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'i';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'i';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'i';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'i';

                sleep(1-1/2);
                dig++;
            }
        }

        if (key[KEY_J])
        {

            if(dig==1)
            {
            teste[0] = 'j';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'j';

            sleep(1-1/2);
            dig++;//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'j';

            sleep(1-1/2);
            dig++;
            }
            else if (dig==4)
            {
                teste[3] = 'j';

                sleep(1-1/2);
                dig++;
            }
            else if (dig==5)
            {
                teste[4] = 'j';

                sleep(1-1/2);
                dig++;
            }
        }

        if (key[KEY_K])
        {

            if(dig==1)
            {
            teste[0] = 'k';

            sleep(1-1/2);
            dig++;
            }
            else if(dig==2)
            {
            teste[1] = 'k';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'k';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'k';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'k';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_L])
        {

            if(dig==1)
            {
            teste[0] = 'l';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'l';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'l';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'l';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'l';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_M])
        {

            if(dig==1)
            {
            teste[0] = 'm';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'm';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'm';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'm';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'm';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_N])
        {

            if(dig==1)
            {
            teste[0] = 'n';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'n';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'n';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'n';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'n';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_O])
        {

            if(dig==1)
            {
            teste[0] = 'o';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'o';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'o';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'o';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'o';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_P])
        {

            if(dig==1)
            {
            teste[0] = 'p';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'p';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'p';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'p';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'p';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_Q])
        {

            if(dig==1)
            {
            teste[0] = 'q';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'q';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'q';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'q';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'q';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_R])
        {

            if(dig==1)
            {
            teste[0] = 'r';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'r';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'r';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'r';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'r';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_S])
        {

            if(dig==1)
            {
            teste[0] = 's';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 's';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 's';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 's';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 's';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_T])
        {

            if(dig==1)
            {
            teste[0] = 't';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 't';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 't';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 't';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 't';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_U])
        {

            if(dig==1)
            {
            teste[0] = 'u';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'u';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'u';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'u';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'u';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_F])
        {

            if(dig==1)
            {
            teste[0] = 'v';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'v';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'v';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'v';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'v';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_X])
        {

            if(dig==1)
            {
            teste[0] = 'x';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'x';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'x';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'x';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'x';
                dig++;
                sleep(1-1/2);
            }
        }

        if (key[KEY_Z])
        {

            if(dig==1)
            {
            teste[0] = 'z';
            dig++;
            sleep(1-1/2);
            }
            else if(dig==2)
            {
            teste[1] = 'z';
            dig++;
            sleep(1-1/2);//for(j=0;j<99999999;j++);
            }
            else if(dig==3)
            {
            teste[2] = 'z';
            dig++;
            sleep(1-1/2);
            }
            else if (dig==4)
            {
                teste[3] = 'z';
                dig++;
                sleep(1-1/2);
            }
            else if (dig==5)
            {
                teste[4] = 'z';
                dig++;
                sleep(1-1/2);
            }
        }


   draw_sprite(screen, buffer, 0 , 0);
    draw_sprite (buffer, telarosa, 0 , 0);
     textprintf_ex (buffer, fixedsys3, 30,300, makecol(0,0,0), -1, "Digite seu nome: %c%c%c%c%c",teste[0], teste[1], teste[2], teste[3], teste[4]);
      textout_ex (buffer, fixedsys , "Ranking", 280, 40, makecol (0,0,0), -1);





   }





}
void tela4players (int x)
{
    BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* telarosa = load_bitmap ("telarosa.bmp",NULL);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);
    float pos_y_seta = 215;
    int cor1, cor2, cor3, y;


    while(!exit_program)
    {
        if(key[KEY_ESC])
        {
            tela3dificuldade();
        }
        if (key[KEY_DOWN])
        {
            pos_y_seta = pos_y_seta + 3.0;
        }
        if (key[KEY_UP])
        {
            pos_y_seta = pos_y_seta - 3.0;
        }
        if (pos_y_seta>=200 && pos_y_seta<=240 && key[KEY_ENTER])
        {
            y=0;
            jogo(x,y, NULL, NULL);
        }
        if (pos_y_seta>=300 && pos_y_seta<=340 && key[KEY_ENTER])
        {

            y=2;
            jogo(x,y, NULL, NULL);
        }
        if (pos_y_seta>=200 && pos_y_seta<=240)
        {
            cor1 = 255;
        }
        else
            cor1 = 0;
        if (pos_y_seta>=300 && pos_y_seta<=340)
        {
            cor2 = 255;
        }
        else
            cor2 = 0;
        if (pos_y_seta >= 400 && pos_y_seta<=440)
        {
            cor3 = 255;
        }
        else
            cor3 = 0;
        if (pos_y_seta >= 400 && pos_y_seta<=440 && key[KEY_ENTER])
        {
            tela3dificuldade();
        }


        draw_sprite (buffer, telarosa, 0 , 0);
        textout_ex (buffer, fixedsys, "1 Player", 250 , 200 , makecol (0,0,cor1), -1);
        textout_ex (buffer, fixedsys, "2 Players", 250, 300, makecol (0,0,cor2), -1);
        textout_ex (buffer, fixedsys , "Voltar", 310, 400, makecol (0,0,cor3), -1);
        draw_sprite(buffer, seta2, 200, pos_y_seta);
        draw_sprite(screen, buffer, 0 , 0);
    }
}
void tela3dificuldade ()
{
    BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
    BITMAP* telarosa = load_bitmap("telarosa.bmp", NULL);
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);

    float pos_y_seta = 300;
    int cor1 = 0, cor2=0, cor3 = 0 , cor4, x;
    while(!exit_program)
    {
        if (key[KEY_ESC])
        {
            tela2jogar();
        }
        if (key[KEY_DOWN])
        {
            pos_y_seta = pos_y_seta + 3.0;
        }
        if (key[KEY_UP])
        {
            pos_y_seta = pos_y_seta - 3.0;
        }
         if (pos_y_seta>=280 && pos_y_seta<=330 && key[KEY_ENTER])
         {

             x=1;
             tela4players(x);
         }
         if (pos_y_seta>=370 && pos_y_seta<=410 && key[KEY_ENTER])
         {

             x=2;
             tela4players(x);
         }
         if (pos_y_seta>=450 && pos_y_seta<=490 && key[KEY_ENTER])
         {
             x=3;
             tela4players(x);
         }

        if (pos_y_seta>=280 && pos_y_seta<=330)
        {
            cor1 = 255;
        }
        else
            cor1=0;
        if (pos_y_seta>= 370 && pos_y_seta <= 410)
            cor2 = 255;
        else
            cor2=0;
        if (pos_y_seta>=450 && pos_y_seta <= 490)
            cor3=255;
        else
            cor3 = 0;
        if (pos_y_seta>= 530 && pos_y_seta <= 570)
            cor4 = 255;
        else
            cor4 = 0;
        if (pos_y_seta>=530 && pos_y_seta <= 570 && key[KEY_ENTER])
        {
            tela2jogar();
        }

        draw_sprite(buffer, telarosa, 0, 0);
        textout_ex(buffer, fixedsys, "Escolha o Nivel", 120, 100, makecol(0,0,0), -1);
        textout_ex (buffer, fixedsys , "de dificuldade", 150, 160, makecol(0,0,0), -1);
        textout_ex (buffer, fixedsys, "Facil", 300, 280, makecol(0,0,cor1), -1);
        textout_ex (buffer, fixedsys, "Medio", 300, 370, makecol(0,0,cor2), -1);
        textout_ex (buffer, fixedsys, "Dificil", 270, 450, makecol(0,0,cor3), -1);
        textout_ex (buffer, fixedsys, "Voltar", 290 , 530 , makecol (0,0,cor4), -1);
        draw_sprite (buffer, seta2, 200,pos_y_seta);

        draw_sprite(screen, buffer, 0 , 0);
    }
}
void tela2jogar()
{
    BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* telarosa = load_bitmap ("telarosa.bmp", NULL);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);
    float pos_y_seta = 220;
    int cor = 0, cor1=0, cor2 = 0;

    while (!exit_program)
    {
         if (key[KEY_ESC])
         {

            menujogo();

         }
        if (key[KEY_DOWN])
        {
            pos_y_seta = pos_y_seta + 3.0;
        }
        if (key[KEY_UP])
        {
            pos_y_seta = pos_y_seta - 3.0;
        }

        if (pos_y_seta>=160 && pos_y_seta<=250)
        {
            cor = 255;
        }
        else
            cor=0;
        if (pos_y_seta>= 280 && pos_y_seta<=360)
            cor1 = 255;
        else
            cor1 = 0;
        if (pos_y_seta>= 380 && pos_y_seta<= 440)
            cor2=255;
        else
            cor2=0;

        if (pos_y_seta>=160 && key[KEY_ENTER] && pos_y_seta<=250)
        {

            tela3dificuldade();
        }
        if (pos_y_seta>=400 && key[KEY_ENTER] && pos_y_seta <= 500 )
        {

            menujogo();
        }
         if (pos_y_seta>=200 && key[KEY_ENTER] && pos_y_seta <= 360 )
        {

            personalizado();
        }


        draw_sprite(screen, buffer, 0 , 0);
        draw_sprite (buffer, telarosa, 0 , 0);
        draw_sprite (buffer, seta2, 150, pos_y_seta);
        textout_ex (buffer, fixedsys , "Padrao", 300, 200, makecol(0,0,cor), -1);
        textout_ex (buffer, fixedsys, "Personalizado", 210, 300, makecol(0,0,cor1), -1);
        textout_ex (buffer, fixedsys, "Voltar", 300, 400, makecol(0,0,cor2), -1);



    }

}
void init()
{
     allegro_init();
   install_timer();
   install_keyboard();
   set_color_depth(32);
   set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
   set_window_title("FREEWAY 1.0");

    int exit_program = FALSE;
}

void escolherplayers(float vel[], float tam[])
{
    BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* telarosa = load_bitmap ("telarosa.bmp",NULL);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);
    FONT* fixedsys2 = load_font ("fixedsys2.pcx", NULL, NULL);
    float pos_y_seta = 215;
    int cor1, cor2, cor3, y, x;


    while(!exit_program)
    {
        if(key[KEY_ESC])
        {
            personalizado();
        }
        if (key[KEY_DOWN])
        {
            pos_y_seta = pos_y_seta + 3.0;
        }
        if (key[KEY_UP])
        {
            pos_y_seta = pos_y_seta - 3.0;
        }
        if (pos_y_seta>=200 && pos_y_seta<=240 && key[KEY_ENTER])
        {
            y = 5;
            jogo(NULL,y,vel, tam );
        }
        if (pos_y_seta>=300 && pos_y_seta<=340 && key[KEY_ENTER])
        {

            y = 6;
            jogo(NULL,y, vel, tam);
        }
        if (pos_y_seta>=200 && pos_y_seta<=240)
        {
            cor1 = 255;
        }
        else
            cor1 = 0;
        if (pos_y_seta>=300 && pos_y_seta<=340)
        {
            cor2 = 255;
        }
        else
            cor2 = 0;
        if (pos_y_seta >= 400 && pos_y_seta<=440)
        {
            cor3 = 255;
        }
        else
            cor3 = 0;
        if (pos_y_seta >= 400 && pos_y_seta<=440 && key[KEY_ENTER])
        {
            personalizado();
        }


        draw_sprite (buffer, telarosa, 0 , 0);
        textout_ex (buffer, fixedsys, "1 Player", 250 , 200 , makecol (0,0,cor1), -1);
        textout_ex (buffer, fixedsys, "2 Players", 250, 300, makecol (0,0,cor2), -1);
        textout_ex (buffer, fixedsys , "Voltar", 310, 400, makecol (0,0,cor3), -1);

        draw_sprite(buffer, seta2, 200, pos_y_seta);
        draw_sprite(screen, buffer, 0 , 0);
    }
}

void continuar (float vel[])
{
        BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
        BITMAP* telarosa = load_bitmap ("telarosa.bmp", NULL);
        BITMAP* seta = load_bitmap ("seta2.bmp", NULL);
        BITMAP* carro1 = load_bitmap("carro1.bmp",NULL);
        BITMAP* carro2 = load_bitmap ("carro2.bmp",NULL);
        BITMAP* carro3 = load_bitmap ("carro3.bmp",NULL);
        BITMAP* carro4 = load_bitmap ("carro4.bmp",NULL);
        BITMAP* carro5 = load_bitmap ("carro5.bmp",NULL);
        BITMAP* carro6 = load_bitmap ("carro6.bmp",NULL);
        BITMAP* carro7 = load_bitmap ("carro7.bmp", NULL);
        BITMAP* carro8 = load_bitmap ("carro8.bmp",NULL);
        BITMAP* carro9 = load_bitmap ("carro9.bmp", NULL);
        FONT* fixedsys2 = load_font ("fixedsys2.pcx", NULL, NULL);

        int cor [10];
        float tam[10];
        int i;
        for (i=0; i<=10; i++)
        {
            cor [i] = 0;
            tam[i] = 60;
        }
        int ue=1;   // Se não tiver o jogo não funciona






        int seta2 = 50;
        int seta2x = 15;



        while (!exit_program)
        {
            if (key[KEY_ESC])
            {
                personalizado();
            }
            if (key[KEY_UP])
            {
                seta2  = seta2 - 2.0;
            }

            if(key[KEY_DOWN])
            {
                    seta2 = seta2 + 2.0;
            }
            // Carro 0
            if (seta2>=40 && seta2<=70)
                cor[0] = 255;
            else
                cor[0] = 0;

             if (seta2>40 && seta2<=70 && key[KEY_RIGHT])
            {

                tam[0] = tam[0] + 0.2;

            }
            if (seta2>40 && seta2<=70 && key[KEY_LEFT])
            {

                tam[0] = tam[0] - 0.2;

            }

            // Carro 1

            if (seta2>=90 && seta2<=120)
                cor[1] = 255;
            else
                cor[1] = 0;

             if (seta2>90 && seta2<=120 && key[KEY_RIGHT])
            {

                tam[1] = tam[1] + 0.2;

            }
            if (seta2>90 && seta2<=120 && key[KEY_LEFT])
            {

                tam[1] = tam[1] - 0.2;

            }

            // Carro 2

            if (seta2>=140 && seta2<=170)
                cor[2] = 255;
            else
                cor[2] = 0;

             if (seta2>140 && seta2<=170 && key[KEY_RIGHT])
            {

                tam[2] = tam[2] + 0.2;

            }
            if (seta2>140 && seta2<=170 && key[KEY_LEFT])
            {

                tam[2] = tam[2] - 0.2;

            }

            // Carro 3

            if (seta2>=190 && seta2<=220)
                cor[3] = 255;
            else
                cor[3] = 0;

             if (seta2>190 && seta2<=220 && key[KEY_RIGHT])
            {

                tam[3] = tam[3] + 0.2;

            }
            if (seta2>190 && seta2<=220 && key[KEY_LEFT])
            {

                tam[3] = tam[3] - 0.2;

            }

            // Carro 4

             if (seta2>=240 && seta2<=270)
                cor[4] = 255;
            else
                cor[4] = 0;

             if (seta2>240 && seta2<=270 && key[KEY_RIGHT])
            {

                tam[4] = tam[4] + 0.2;

            }
            if (seta2>240 && seta2<=270 && key[KEY_LEFT])
            {

                tam[4] = tam[4] - 0.2;

            }
            // Carro 5

             if (seta2>=290 && seta2<=320)
                cor[5] = 255;
            else
                cor[5] = 0;

             if (seta2>290 && seta2<=320 && key[KEY_RIGHT])
            {

                tam[5] = tam[5] + 0.2;

            }
            if (seta2>290 && seta2<=320 && key[KEY_LEFT])
            {

                tam[5] = tam[5] - 0.2;

            }
            // Carro 6

             if (seta2>=340 && seta2<=370)
                cor[6] = 255;
            else
                cor[6] = 0;

             if (seta2>340 && seta2<=370 && key[KEY_RIGHT])
            {

                tam[6] = tam[6] + 0.2;

            }
            if (seta2>340 && seta2<=370 && key[KEY_LEFT])
            {

                tam[6] = tam[6] - 0.2;

            }
            // Carro 7

              if (seta2>=390 && seta2<=420)
                cor[7] = 255;
            else
                cor[7] = 0;

             if (seta2>390 && seta2<=420 && key[KEY_RIGHT])
            {

                tam[7] = tam[7] + 0.2;

            }
            if (seta2>=390 && seta2<=420 && key[KEY_LEFT])
            {

                tam[7] = tam[7] - 0.2;

            }
            // Carro 8

              if (seta2>=440 && seta2<=470)
                cor[8] = 255;
            else
                cor[8] = 0;

             if (seta2>440 && seta2<=470 && key[KEY_RIGHT])
            {

                tam[8] = tam[8] + 0.2;

            }
            if (seta2>=440 && seta2<=470 && key[KEY_LEFT])
            {

                tam[8] = tam[8] - 0.2;

            }
            // Carro 9


              if (seta2>=495 && seta2<=520 && seta2x==15)
                cor[9] = 255;
            else
                cor[9] = 0;

             if (seta2>495 && seta2<=520 && key[KEY_RIGHT] && seta2x == 15)
            {

                tam[9] = tam[9] + 0.2;

            }
            if (seta2>=495 && seta2<=520 && key[KEY_LEFT] && seta2x == 15)
            {

                tam[9] = tam[9] - 0.2;

            }









            draw_sprite(screen, buffer, 0 , 0);
            draw_sprite (buffer, telarosa, 0, 0);
            draw_sprite (buffer, seta, seta2x, seta2);
            textout_ex (buffer, fixedsys2 , "Escolha os tamanhos dos carros " , 10, 10 , makecol(0, 0, 0), -1);
            stretch_sprite (buffer, carro1, 350, 50 , tam[0], 38);
            stretch_sprite (buffer, carro2, 350, 100 , tam[1], 38);
            stretch_sprite (buffer, carro3, 350, 150 , tam[2], 38);
            stretch_sprite (buffer, carro4, 350, 200 , tam[3], 38);
            stretch_sprite (buffer, carro5, 350, 250 , tam[4], 38);
            stretch_sprite (buffer, carro6, 350, 300 , tam[5], 38);
            stretch_sprite (buffer, carro7, 350, 350 , tam[6], 38);
            stretch_sprite (buffer, carro8, 350, 400 , tam[7], 38);
            stretch_sprite (buffer, carro9, 350, 450 , tam[8], 38);
            stretch_sprite (buffer, carro1, 350, 500 , tam[9], 38);









         textout_ex (buffer, fixedsys2 , "Tamanho carro 1:" , 60, 50 , makecol(cor[0], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 600,50, makecol(0,0,255), -1, "%.1f", tam[0]);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 2:" , 60, 100 , makecol(cor[1], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 3:" , 60, 150 , makecol(cor[2], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , " Tamanho carro 4:" , 28, 200 , makecol(cor[3], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 5:" , 60, 250 , makecol(cor[4], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 6:" , 60, 300 , makecol(cor[5], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 7:" , 60, 350 , makecol(cor[6], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 8:" , 60, 400 , makecol(cor[7], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 9:" , 60, 450 , makecol(cor[8], 0, 0), -1);
         textout_ex (buffer, fixedsys2 , "Tamanho carro 10: " , 60, 500 , makecol(cor[9], 0, 0), -1);
         textout_ex (buffer, fixedsys2, "Continuar", 650, 550, makecol(cor[10],0,0), -1);


         if (seta2>=540 && seta2<=570 && key[KEY_ENTER])
         {
             escolherplayers(vel,tam);
         }



        if (seta2 >= 540 &&seta2 <= 570)
        {
            seta2x = 600;

            cor[10] = 255;
        }

         else
            cor[10] = 0;
         if (seta2 == 530 && key[KEY_UP])
         {
             seta2x = 15;
         }
         if (seta2 == 570 && key[KEY_DOWN])
         {
             seta2x = 15;
             seta2 = 50;
         }
         if (seta2<40 && key[KEY_UP])
         {
             seta2x = 600;
             seta2 = 550;
         }



        }
}
void personalizado ()
{
    BITMAP* carro1 = load_bitmap("carro1.bmp",NULL);
    BITMAP* carro2 = load_bitmap ("carro2.bmp",NULL);
    BITMAP* carro3 = load_bitmap ("carro3.bmp",NULL);
    BITMAP* carro4 = load_bitmap ("carro4.bmp",NULL);
    BITMAP* carro5 = load_bitmap ("carro5.bmp",NULL);
    BITMAP* carro6 = load_bitmap ("carro6.bmp",NULL);
    BITMAP* carro7 = load_bitmap ("carro7.bmp", NULL);
    BITMAP* carro8 = load_bitmap ("carro8.bmp",NULL);
    BITMAP* carro9 = load_bitmap ("carro9.bmp", NULL);
    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
     BITMAP* telarosa = load_bitmap ("telarosa.bmp", NULL);
     FONT* fixedsys2 = load_font ("fixedsys2.pcx", NULL, NULL);
     BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
     int cor[9], i;
     float vel1 = 0.0, pos_y_seta2 = 50, pos_x_seta2 =  10;
     float vel[10], x[10];
     for (i=0;i<11; i++)
     {
         vel[i] = 0;
         cor [i] = 0;
         x[i] = 0;
     }
     int cor10 = 0;
     float velcarro1 = 0;
    float pos_x_carro1 = 450, pos_x_carro2 = 450, pos_x_carro3 = 450 , pos_x_carro4 = 450;
    float pos_x_carro5 = 450, pos_x_carro6 = 450, pos_x_carro7 = 450, pos_x_carro8 = 450;
    float pos_x_carro9 = 450, pos_x_carro10 = 450;

     while (!exit_program)
     {
         if (key[KEY_ESC])
         {

             tela2jogar();
         }
         if (key[KEY_UP])
         {
             pos_y_seta2 = pos_y_seta2 - 2.0;
         }
         if (key[KEY_DOWN])
         {
             pos_y_seta2 = pos_y_seta2 + 2.0;
         }
         if (pos_y_seta2 == 30 && key[KEY_UP] )
         {
             pos_y_seta2 = 550;
             pos_x_seta2 = 500;
         }
         if (pos_y_seta2 == 510 && key[KEY_DOWN])
         {
             pos_y_seta2 = 530;
             pos_x_seta2 = 505;
         }
         if (pos_y_seta2>=40 && pos_y_seta2 <=70)
            cor[0] = 255;
         else
            cor[0] = 0;

        if (pos_y_seta2>=90 && pos_y_seta2 <=120)
            cor[1] = 255;
         else
            cor[1] = 0;

        if (pos_y_seta2>=140 && pos_y_seta2 <=170)
            cor[2] = 255;
         else
            cor[2] = 0;

        if (pos_y_seta2>=190 && pos_y_seta2 <=220)
            cor[3] = 255;
         else
            cor[3] = 0;

        if (pos_y_seta2>=240 && pos_y_seta2 <=270)
            cor[4] = 255;
         else
            cor[4] = 0;

        if (pos_y_seta2>=290 && pos_y_seta2 <=320)
            cor[5] = 255;
         else
            cor[5] = 0;

        if (pos_y_seta2>=340 && pos_y_seta2 <=370)
            cor[6] = 255;
         else
            cor[6] = 0;

        if (pos_y_seta2>=390 && pos_y_seta2 <=420)
            cor[7] = 255;
         else
            cor[7] = 0;

        if (pos_y_seta2>=440 && pos_y_seta2 <=470)
            cor[8] = 255;
         else
            cor[8] = 0;

        if (pos_y_seta2>=490 && pos_y_seta2 <=520)
            cor[9] = 255;
         else
            cor[9] = 0;

        // Velocidade / interação carro 1
        if (pos_y_seta2>=40 && pos_y_seta2<= 70 && key[KEY_ENTER])
        {
            pos_x_carro1 = 450;
            x[0] = 0;
        }

        if (pos_x_carro1>SCREEN_W)
            pos_x_carro1 = 450;


        pos_x_carro1 = pos_x_carro1 + x[0];

         if (pos_y_seta2>=40 && pos_y_seta2 <=70 && key[KEY_RIGHT])
         {
             if(vel[0]<5)
             {
                 vel[0] = vel[0] + 0.01;
                 x[0] = vel[0] + 0.01;
             }

         }

            if (pos_y_seta2>=40 && pos_y_seta2 <=70 && key[KEY_LEFT])
         {
            if (vel[0]>=0.01)
            {
               vel[0] = vel[0] - 0.01;
               x[0] = vel[0] - 0.01;
            }

         }

         // Velocidade / Interação carro 2

        if (pos_y_seta2>=90 && pos_y_seta2<= 120 && key[KEY_ENTER])
        {
            pos_x_carro2 = 450;
            x[1] = 0;
        }
         if (pos_x_carro2>SCREEN_W)
            pos_x_carro2 = 450;

         pos_x_carro2 = pos_x_carro2 + x[1];


         if (pos_y_seta2>=90 && pos_y_seta2 <=120 && key[KEY_RIGHT])
         {
              if(vel[1]<5)
             {
                 vel[1] = vel[1] + 0.01;
                 x[1] = vel[1] + 0.01;
             }

         }
            if (pos_y_seta2>=90 && pos_y_seta2 <=120 && key[KEY_LEFT])
         {

             if(vel[1]>=0.01)
             {
                 vel[1] = vel[1] - 0.01;
                 x[1] = vel[1] - 0.01;
             }
         }

         // Velocidade / interação carro 3

         if (pos_y_seta2>=140 && pos_y_seta2<= 170 && key[KEY_ENTER])
        {
            pos_x_carro3 = 450;
            x[2] = 0;
        }

         if (pos_x_carro3>SCREEN_W)
            pos_x_carro3 = 450;

            pos_x_carro3 = pos_x_carro3 + x[2];

         if (pos_y_seta2>=140 && pos_y_seta2 <=170 && key[KEY_RIGHT])
         {
             if (vel[2]<5)
             {
                  vel[2] = vel[2] + 0.01;
                  x[2] = vel[2] + 0.01;
             }

         }
            if (pos_y_seta2>=140 && pos_y_seta2 <=170 && key[KEY_LEFT])
         {

             if (vel[2]>=0.01)
             {
                 vel[2] = vel[2] - 0.01;
                 x[2] = vel[2] - 0.01;
             }
         }
         // Velocidade / interação carro 4

          if (pos_y_seta2>=190 && pos_y_seta2<= 220 && key[KEY_ENTER])
        {
            pos_x_carro4 = 450;
            x[3] = 0;
        }

        if (pos_x_carro4>SCREEN_W)
            pos_x_carro4 = 450;

            pos_x_carro4 = pos_x_carro4 + x[3];


         if (pos_y_seta2>=190 && pos_y_seta2 <=220 && key[KEY_RIGHT])
         {
             if (vel[3]<5)
             {
                 vel[3] = vel[3] + 0.01;
                 x[3] = vel[3] + 0.01;
             }
         }
            if (pos_y_seta2>=190 && pos_y_seta2 <=220 && key[KEY_LEFT])
         {

            if (vel[3]>=0.01)
            {
                 vel[3] = vel[3] - 0.01;
                 x[3] = vel[3] - 0.01;
            }

         }

         // Velocidade / interação carro 5

          if (pos_y_seta2>=240 && pos_y_seta2<= 270 && key[KEY_ENTER])
        {
            pos_x_carro5 = 450;
            x[4] = 0;
        }

        if (pos_x_carro5>SCREEN_W)
            pos_x_carro5 = 450;

            pos_x_carro5 = pos_x_carro5 + x[4];

         if (pos_y_seta2>=240 && pos_y_seta2 <=270 && key[KEY_RIGHT])
         {
             if (vel[4]<5){

                vel[4] = vel[4] + 0.01;
                x[4] = vel[4] + 0.01;
             }


         }
            if (pos_y_seta2>=240 && pos_y_seta2 <=270 && key[KEY_LEFT])
         {

             if (vel[4]>=0.01)
             {
                 vel[4] = vel[4] - 0.01;
                 x[4] = vel[4] - 0.01;
             }

         }

          // Velocidade / interação carro 6

            if (pos_y_seta2>=290 && pos_y_seta2<= 320 && key[KEY_ENTER])
        {
            pos_x_carro6 = 450;
            x[5] = 0;
        }

         if (pos_x_carro6>SCREEN_W)
            pos_x_carro6 = 450;

            pos_x_carro6 = pos_x_carro6 + x[5];

         if (pos_y_seta2>=290 && pos_y_seta2 <=320 && key[KEY_RIGHT])
         {
            if (vel[5]<5)
            {
                vel[5] = vel[5] + 0.01;
                x[5] = vel[5] + 0.01;
            }
         }
            if (pos_y_seta2>=290 && pos_y_seta2 <=320 && key[KEY_LEFT])
         {

            if (vel[5]>=0.01)
            {
                vel[5] = vel[5] - 0.01;
                x[5] = vel[5] - 0.01;

            }


         }

             // Velocidade / interação carro 7

            if (pos_y_seta2>=340 && pos_y_seta2<= 370 && key[KEY_ENTER])
        {
            pos_x_carro7 = 450;
            x[6] = 0;
        }

         if (pos_x_carro7>SCREEN_W)
            pos_x_carro7 = 450;

            pos_x_carro7 = pos_x_carro7 + x[6];
         if (pos_y_seta2>=340 && pos_y_seta2 <=370 && key[KEY_RIGHT])
         {
             if (vel[6]<5)
                vel[6] = vel[6] + 0.01;
                x[6] = vel[6] + 0.01;
         }
            if (pos_y_seta2>=340 && pos_y_seta2 <=370 && key[KEY_LEFT])
         {

             if (vel[6]>=0.01)
                vel[6] = vel[6] - 0.01;
                x[6] = vel[6] - 0.01;
         }

          // Velocidade / interação carro 8

            if (pos_y_seta2>=390 && pos_y_seta2<= 420 && key[KEY_ENTER])
        {
            pos_x_carro8 = 450;
            x[7] = 0;
        }

         if (pos_x_carro8>SCREEN_W)
            pos_x_carro8 = 450;

            pos_x_carro8 = pos_x_carro8 + x[7];

         if (pos_y_seta2>=390 && pos_y_seta2 <=420 && key[KEY_RIGHT])
         {
             if (vel[7]<5)
                vel[7] = vel[7] + 0.01;
                x[7] = vel[7] + 0.01;
         }
            if (pos_y_seta2>=390 && pos_y_seta2 <=420 && key[KEY_LEFT])
         {

             if (vel[7]>=0.01)
             {
                 vel[7] = vel[7] - 0.01;
                 x[7] = vel[7] - 0.01;
             }
         }

          // Velocidade / interação carro 9

            if (pos_y_seta2>=440 && pos_y_seta2<= 470 && key[KEY_ENTER])
        {
            pos_x_carro9 = 450;
            x[8] = 0;
        }

         if (pos_x_carro9>SCREEN_W)
            pos_x_carro9 = 450;

            pos_x_carro9 = pos_x_carro9 + x[8];

         if (pos_y_seta2>=440 && pos_y_seta2 <=470 && key[KEY_RIGHT])
         {
             if (vel[8]<5)
                vel[8] = vel[8] + 0.01;
                x[8] = vel[8] + 0.01;
         }
            if (pos_y_seta2>=440 && pos_y_seta2 <=470 && key[KEY_LEFT])
         {

             if (vel[8]>=0.01)
                vel[8] = vel[8] - 0.01;
                x[8] = vel[8] - 0.01;
         }

         // Velocidade / interação carro 10


            if (pos_y_seta2>=490 && pos_y_seta2<= 520 && key[KEY_ENTER])
        {
            pos_x_carro10 = 450;
            x[9] = 0;
        }

         if (pos_x_carro10>SCREEN_W)
            pos_x_carro10 = 450;

            pos_x_carro10 = pos_x_carro10 + x[9];

         if (pos_y_seta2>=490 && pos_y_seta2 <=520 && key[KEY_RIGHT])
         {
             if (vel[9]<5)
                vel[9] = vel[9] + 0.01;
                x[9] = vel[9] + 0.01;
         }
            if (pos_y_seta2>=490 && pos_y_seta2 <=520 && key[KEY_LEFT])
         {

             if (vel[9]>=0.01)
                vel[9] = vel[9] - 0.01;
                x[9] = vel[9] - 0.01;
         }





         if (pos_y_seta2 >= 530 && pos_y_seta2 <= 560)
            cor10 = 255;
         else
            cor10 = 0;
         if (pos_y_seta2 == 520 && key[KEY_UP])
         {
             pos_x_seta2 = 10;
         }
         if (pos_y_seta2 == 570 && key[KEY_DOWN])
         {
             pos_x_seta2 = 10;
             pos_y_seta2 = 50;
         }

         if(pos_y_seta2>= 530 && pos_y_seta2 <=560 && key[KEY_ENTER])
         {

             continuar(vel);
         }





         draw_sprite(screen, buffer, 0 , 0);
         draw_sprite (buffer, telarosa, 0, 0);
         draw_sprite (buffer, carro1, pos_x_carro1, 50);
         draw_sprite (buffer, carro2, pos_x_carro2, 100);
         draw_sprite (buffer, carro3, pos_x_carro3, 150);
         draw_sprite (buffer, carro4, pos_x_carro4 , 200);
         draw_sprite (buffer, carro5, pos_x_carro5, 250);
         draw_sprite (buffer, carro6, pos_x_carro6, 300);
         draw_sprite (buffer, carro7, pos_x_carro7, 350);
         draw_sprite (buffer, carro8, pos_x_carro8, 400);
         draw_sprite (buffer, carro9, pos_x_carro9, 450);
         draw_sprite (buffer, carro1, pos_x_carro10, 500);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 1: " , 60, 50 , makecol(cor[0], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,50, makecol(0,0,255), -1, "%.1f", vel[0]);


         textout_ex (buffer, fixedsys2 , "Velocidade carro 2: " , 60, 100 , makecol(cor[1], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,100, makecol(0,0,255), -1, "%.1f", vel[1]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 3: " , 60, 150 , makecol(cor[2], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,150, makecol(0,0,255), -1, "%.1f", vel[2]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 4: " , 60, 200 , makecol(cor[3], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,200, makecol(0,0,255), -1, "%.1f", vel[3]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 5: " , 60, 250 , makecol(cor[4], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,250, makecol(0,0,255), -1, "%.1f", vel[4]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 6: " , 60, 300 , makecol(cor[5], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,300, makecol(0,0,255), -1, "%.1f", vel[5]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 7: " , 60, 350 , makecol(cor[6], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,350, makecol(0,0,255), -1, "%.1f", vel[6]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 8: " , 60, 400 , makecol(cor[7], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,400, makecol(0,0,255), -1, "%.1f", vel[7]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 9: " , 60, 450 , makecol(cor[8], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 390,450, makecol(0,0,255), -1, "%.1f", vel[8]);

         textout_ex (buffer, fixedsys2 , "Velocidade carro 10: " , 60, 500 , makecol(cor[9], 0, 0), -1);
         textprintf_ex (buffer, fixedsys2, 395,500, makecol(0,0,255), -1, "%.1f", vel[9]);

         textout_ex(buffer, fixedsys2 , "Vel max = 5.0", 500,10, makecol(0,0,0), -1);

         textout_ex (buffer, fixedsys2 , "Continuar", 550, 540, makecol (cor10,0,0),-1);

         draw_sprite(buffer, seta2, pos_x_seta2, pos_y_seta2);

     }

}
void menujogo ()
{

    BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* menujogo = load_bitmap ("menujogo.bmp", NULL);
    BITMAP* seta2 = load_bitmap ("seta2.bmp", NULL);
    FONT* fixedsys = load_font ("fixedsys.pcx", NULL, NULL);
    float pos_y_seta = 220;
    int cor = 0, cor1 = 0, cor2 = 0, cor3= 0;


    while(!exit_program)
    {


        if (key[KEY_ESC])
        {

            exit_program = TRUE;
        }

        draw_sprite (buffer, menujogo, 0, 0);
        draw_sprite (buffer, seta2, 440, pos_y_seta);
        textout_ex (buffer, fixedsys , "Jogar", 540, 210, makecol(0,0,cor), -1);
        textout_ex (buffer, fixedsys , "Instrucoes" , 480 , 320 , makecol(0,0,cor1), -1);
        textout_ex (buffer, fixedsys , "Ranking" , 520, 430 , makecol(0, 0, cor2), -1);
        textout_ex (buffer, fixedsys , "Sair" , 550, 530 , makecol(0, 0, cor3), -1);

        draw_sprite(screen, buffer, 0 , 0);
        clear(buffer);

         if ((pos_y_seta>=520) && pos_y_seta<=580 && key[KEY_ENTER])
         {
             exit_program = TRUE;
         }
        if ((pos_y_seta>=520) && pos_y_seta<=580)
            cor3 =255;
         else
            cor3=0;

        if (pos_y_seta == 222)
                pos_y_seta=225;

        if ((pos_y_seta>=200) && (key[KEY_ENTER]) && pos_y_seta<=240)
        {

            tela2jogar();

        }
        if ((pos_y_seta>=310) && pos_y_seta<=360)
            cor1 =255;
         else
            cor1=0;

         if ((pos_y_seta>=420) && pos_y_seta<=480)
            cor2 =255;
         else
            cor2=0;

        if ((pos_y_seta>=200) && pos_y_seta<=240)
            cor =255;
         else
            cor=0;


         if ((pos_y_seta>=460) && (key[KEY_ENTER]) && pos_y_seta<=500)
        {
            exit_program = TRUE;

        }


        if (key[KEY_DOWN])
        {
            pos_y_seta = pos_y_seta + 3.0;

        }
        if (key[KEY_UP])
        {
            pos_y_seta = pos_y_seta - 3.0;

        }




    }


}

void jogo (int x, int y, float vel[] , float tam [])
{
BITMAP* buffer = create_bitmap(SCREEN_W,SCREEN_H);
    BITMAP* pista = load_bitmap("pista.bmp", NULL);
    BITMAP* carro1 = load_bitmap("carro1.bmp",NULL);
    BITMAP* carro2 = load_bitmap ("carro2.bmp",NULL);
    BITMAP* carro3 = load_bitmap ("carro3.bmp",NULL);
    BITMAP* carro4 = load_bitmap ("carro4.bmp",NULL);
    BITMAP* carro5 = load_bitmap ("carro5.bmp",NULL);
    BITMAP* carro6 = load_bitmap ("carro6.bmp",NULL);
    BITMAP* carro7 = load_bitmap ("carro7.bmp", NULL);
    BITMAP* carro8 = load_bitmap ("carro8.bmp",NULL);
    BITMAP* carro9 = load_bitmap ("carro9.bmp", NULL);
    BITMAP* galinha1 =load_bitmap ("galinha1.bmp",NULL);
    BITMAP* galinha2 = load_bitmap ("galinha2.bmp", NULL);
    BITMAP* vencedor = load_bitmap ("vencedor.bmp", NULL);


    // FONTS

    FONT* verdana = load_font ("verdana.pcx", NULL, NULL);
    FONT* arial = load_font ("arial.pcx", NULL, NULL);

    int score1 = 0, score2 = 0;
     timer=0;

    float pos_y_galinha1 = 575, pos_x_galinha1 = 130, pos_y_galinha2 = 575, pos_x_galinha2 = 600, pos_x_carro1 = -30;
    float pos_x_carro2 = -30, pos_x_carro3 = -30, pos_x_carro4 = -30 , pos_x_carro5 = -30;
    float pos_x_carro6 = 750, pos_x_carro7 = 750, pos_x_carro8 = 750, pos_x_carro9 = 750, pos_x_carro10 = 750;
    float velocidades[10];
    int xgalinha2 = 600, ygalinha2 = 33;
    int j;
    float tamanhocarros[10];
    for (j=0;j<10;j++)
    {
        tamanhocarros[j]=60;
    }

    if (x==3 && y==2)
    {

        velocidades[0] = 1.6;velocidades[1]=1.8;velocidades[2]=1.9;velocidades[3] = 1.9;velocidades[4] = 2.0;
        velocidades[5] = 1.9;velocidades[6] = 2.3; velocidades[7] = 2.4, velocidades[8]= 2.5; velocidades[9] = 2.9;
    }
    if(x==2 && y==2)
    {

        velocidades[0] = 1.0;velocidades[1]=1.1;velocidades[2]=1.2;velocidades[3] = 1.3;velocidades[4] = 1.4;
        velocidades[5] = 0.9;velocidades[6] = 1.6; velocidades[7] = 1.4; velocidades[8] = 2.3; velocidades[9] = 2.2;
    }
    if (x==1 && y==2)
    {

        velocidades[0]=0.8;velocidades[1]=0.9;velocidades[2]=1.0;velocidades[3]=1.1;velocidades[4]=1.2;
        velocidades[5]=0.7;velocidades[6]=1.4;velocidades[7]=1.2;velocidades[8]=1.7;velocidades[9]=2.0;
    }

    if (x==3 && y==0)
    {
        xgalinha2 = -30;
        ygalinha2 = -30;
        pos_x_galinha2=-30;pos_y_galinha2=-30;
        velocidades[0] = 1.6;velocidades[1]=1.8;velocidades[2]=1.9;velocidades[3] = 1.9;velocidades[4] = 2.0;
        velocidades[5] = 1.9;velocidades[6] = 2.3; velocidades[7] = 2.4, velocidades[8]= 2.5; velocidades[9] = 2.9;
    }
    if(x==2 && y==0)
    {
        xgalinha2 = -30;
        ygalinha2 = -30;
        pos_x_galinha2=-30;pos_y_galinha2=-30;
        velocidades[0]= 1.0;velocidades[1]=1.1;velocidades[2]=1.2;velocidades[3] = 1.3;velocidades[4] = 1.4;
        velocidades[5] = 0.9;velocidades[6] = 1.6; velocidades[7] = 1.4; velocidades[8] = 2.3; velocidades[9] = 2.2;
    }
    if (x==1 && y==0)
    {
        xgalinha2 = -30;
        ygalinha2 = -30;
        pos_x_galinha2=-30;
        pos_y_galinha2=-30;
        velocidades[0]=0.8;velocidades[1]=0.9;velocidades[2]=1.0;velocidades[3]=1.1;velocidades[4]=1.2;
        velocidades[5]=0.7;velocidades[6]=1.4;velocidades[7]=1.2;velocidades[8]=1.7;velocidades[9]=2.0;
    }
    if (y==5){

        pos_x_carro5= -30;
        pos_y_galinha2= -30;
        xgalinha2 = -30;
        ygalinha2 = -30;
        for (j=0;j<10;j++)
        {
            velocidades[j]=vel[j];
        }
        for (j=0;j<10;j++)
        {
            tamanhocarros[j]=tam[j];
        }

    }
    if (y==6)
    {
        for (j=0;j<10;j++)
        {
          velocidades[j] = vel[j];
        }
        for(j=0;j<10;j++)
        {
            tamanhocarros[j]=tam[j];
        }

    }


   while (!exit_program)
   {



    //IMPUT
       if (key[KEY_ESC])
       {
            menujogo();
       }
        if (key[KEY_UP])
        {
            pos_y_galinha1 --;
        }
        if (key[KEY_DOWN])
        {
            pos_y_galinha1++;
        }
        if (key[KEY_RIGHT])
        {
            pos_x_galinha1++;
        }
        if (key[KEY_LEFT])
        {
            pos_x_galinha1--;
        }
        if (key[KEY_W])
        {
            pos_y_galinha2 --;
        }
        if (key[KEY_S])
        {
            pos_y_galinha2++;
        }
        if (key[KEY_D])
        {
            pos_x_galinha2 ++;
        }
        if (key[KEY_A])
        {
            pos_x_galinha2 --;
        }
        if (pos_y_galinha1== 30)
        {

            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1++;
        }
        if (pos_y_galinha2 == 30)
        {
            pos_y_galinha2 = 575;
            pos_y_galinha2 = 600;
            score2++;
        }
        if (pos_x_galinha1 == 0)
        {
            pos_x_galinha1 = 1;
        }
        if (pos_x_galinha1 == 760)
        {
            pos_x_galinha1 = 759;
        }
        if (pos_y_galinha1 == 576)
        {
            pos_y_galinha1 = 575;
        }
        if (pos_x_galinha2 == 0)
        {
            pos_x_galinha2 = 1;
        }
        if (pos_x_galinha2 == 760)
        {
            pos_x_galinha2 = 759;
        }
        if (pos_y_galinha2 == 576)
        {
            pos_y_galinha2 = 575;
        }
        if (pos_x_carro1>SCREEN_W)
            pos_x_carro1 = -30;

        if (pos_x_carro2>SCREEN_W)
            pos_x_carro2 = -30;

        if (pos_x_carro3>SCREEN_W)
            pos_x_carro3 = -30;

        if (pos_x_carro4>SCREEN_W)
            pos_x_carro4 = -30;

        if (pos_x_carro5>SCREEN_W)
            pos_x_carro5 = -30;

        if ((pos_x_carro6+60)<=0)
            pos_x_carro6 = 750;

        if ((pos_x_carro7+60)<=0)
            pos_x_carro7 = 750;

        if ((pos_x_carro8 + 60)<=0)
            pos_x_carro8 = 750;

         if ((pos_x_carro9 + 60)<=0)
            pos_x_carro9 = 750;

        if ((pos_x_carro10 + 60)<=0)
            pos_x_carro10 = 750;


        // COLISÔES Galinha 1
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro1, 350, tamanhocarros[0],33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro2, 400, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro3, 445, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro4, 495, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro5, 305, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro6, 252, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro7, 205, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro8, 158, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro9, 110, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        if (bounding_box_collision(pos_x_galinha1, pos_y_galinha1, 35 , 28 , pos_x_carro10, 63, 55,33))
        {
            pos_y_galinha1 = 575;
            pos_x_galinha1 = 130;
            score1--;
        }
        // Colisão galinha 2.
          // Colisão galinha 2.
            // Colisão galinha 2.
              // Colisão galinha 2.
                // Colisão galinha 2.
                  // Colisão galinha 2.
                    // Colisão galinha 2.
                      // Colisão galinha 2.
                        // Colisão galinha 2.
                          // Colisão galinha 2.
                            // Colisão galinha 2.
                              // Colisão galinha 2.
                                // Colisão galinha 2.
                                  // Colisão galinha 2.
                                    // Colisão galinha 2.
                                      // Colisão galinha 2.
                                        // Colisão galinha 2.
                                          // Colisão galinha 2.
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro1, 350, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro2, 400, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro3, 445, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro4, 495, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro5, 305, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro6, 252, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro7, 205, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro8, 158, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro9, 110, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }
        if (bounding_box_collision(pos_x_galinha2, pos_y_galinha2, 35 , 28 , pos_x_carro10, 63, 55,33))
        {
            pos_y_galinha2 = 575;
            pos_x_galinha2 = 600;
            score2--;
        }


      // UPDATE


        pos_x_carro1 = pos_x_carro1 + velocidades[0];
        pos_x_carro2 = pos_x_carro2 + velocidades[1];
        pos_x_carro3 = pos_x_carro3 + velocidades[2];
        pos_x_carro4= pos_x_carro5 + velocidades[3];
        pos_x_carro5 = pos_x_carro5 + velocidades[4];
        pos_x_carro6 = pos_x_carro6 - velocidades[5];
        pos_x_carro7 = pos_x_carro7 - velocidades[6];
        pos_x_carro8 = pos_x_carro8 - velocidades[7];
        pos_x_carro9 = pos_x_carro9 - velocidades[8];
        pos_x_carro10 = pos_x_carro10 - velocidades[9];


        LOCK_FUNCTION(incrementa_timer);
        LOCK_VARIABLE(timer);
        install_int_ex(incrementa_timer, SECS_TO_TIMER(1));




      // DRAW

      draw_sprite(buffer,pista, 0, 0);



      draw_sprite(buffer, galinha1, pos_x_galinha1, pos_y_galinha1);
      draw_sprite (buffer, galinha2, pos_x_galinha2, pos_y_galinha2);
      stretch_sprite (buffer, carro1, pos_x_carro1, 350 , tamanhocarros[0], 38);
      stretch_sprite (buffer, carro2, pos_x_carro2, 400 , tamanhocarros[1], 38);
      stretch_sprite (buffer, carro3, pos_x_carro3, 445 , tamanhocarros[2], 38);
      stretch_sprite (buffer, carro4, pos_x_carro4, 495 , tamanhocarros[3], 38);
      stretch_sprite (buffer, carro5, pos_x_carro5, 305 , tamanhocarros[4], 38);
      stretch_sprite (buffer, carro6, pos_x_carro6, 252 , tamanhocarros[5], 38);
      stretch_sprite (buffer, carro7, pos_x_carro7, 205 , tamanhocarros[6], 38);
      stretch_sprite (buffer, carro8, pos_x_carro8, 158 , tamanhocarros[7], 38);
      stretch_sprite (buffer, carro9, pos_x_carro9, 110 , tamanhocarros[8], 38);
      stretch_sprite (buffer, carro1, pos_x_carro10, 63 , tamanhocarros[9], 38);

       textprintf_ex (buffer, verdana, 300,33, makecol(0,255,64), -1, "tempo: %d", timer);
      textprintf_ex (buffer, verdana, 25,33, makecol(255,0,0), -1, "Galinha 1: %d", score1);
      textprintf_ex (buffer, verdana , xgalinha2, ygalinha2 , makecol (0,0,255), -1, "Galinha 2: %d", score2);
      if (timer==5)
        {
            ranking();
        }




      draw_sprite(screen, buffer, 0 , 0);
        clear(buffer);

   }
}
int main()
{
   init ();
   menujogo();
    // BITMAPS



   allegro_exit();
   return 0;
}
END_OF_MAIN()
