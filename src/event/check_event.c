#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "window.h"

int check_event(sfRenderWindow *win, sfEvent event)
{
    while (sfRenderWindow_pollEvent(win, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(win);
            return -1;
        }
    }
    return 0;
}