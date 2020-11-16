#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "window.h"
#include "sprite.h"
#include <stdio.h>

int main()
{
    sfRenderWindow *win = create_window();
    sfEvent event;
    sfSprite **sprite = sprite_set_and_create_text(5);
    int i = 0;

    while (sfRenderWindow_isOpen(win)) {
        check_event(win, event);
        sfRenderWindow_clear(win, sfGreen);
        i = draw_sprite_on_screen(win, sprite, i);
        sfRenderWindow_display(win);
    }
    sfRenderWindow_destroy(win);
    return 0;
}