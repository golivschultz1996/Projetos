#include <allegro.h>

#include "Jogo.h"

#include <list>
#include <algorithm> // copy algorithm
#include <iterator>

volatile int exit_program;
void fecha_programa() { exit_program = TRUE; }
END_OF_FUNCTION(fecha_programa)

int main(){

    allegro_init();
    install_timer();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1200, 600, 0, 0);
    set_window_title("Tutorial 3 - Sprites");

    exit_program = FALSE;
    LOCK_FUNCTION(fecha_programa);
    LOCK_VARIABLE(exit_program);
    set_close_button_callback(fecha_programa);

    BITMAP* buffer = create_bitmap(8400, SCREEN_H);
    BITMAP* menu   = load_bitmap("Menu_sprite.bmp", NULL);

    Menu M;
    M.Set_menu(buffer, menu);
    M.Executar();

    return 0;
}
END_OF_MAIN();

