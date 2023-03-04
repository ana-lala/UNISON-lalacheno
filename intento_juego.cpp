#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main()
{
    al_init();
    al_install_keyboard();
    al_init_font_addon();
    al_init_ttf_addon();
    ALLEGRO_BITMAP* img;
    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 30.0);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_KEYBOARD_STATE keystate2;
    ALLEGRO_DISPLAY* disp = al_create_display(750, 500);
    //ALLEGRO_FONT* font = al_create_builtin_font();
    ALLEGRO_FONT* font = al_load_font("C:/Users/LCC-UNISON/Desktop/JUEGO/Proyecto-Unison-Juego/ProyectoJuegoUnison/assets/fonts/Minecraft.ttf", 20, 0);

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_timer_event_source(timer));
    al_register_event_source(queue, al_get_display_event_source(disp));

    bool redraw = true;
    ALLEGRO_EVENT event;
    //assert(img != NULL);

    al_start_timer(timer);
    while (redraw)
    {
        al_wait_for_event(queue, &event);
        al_get_keyboard_state(&keystate2);

        if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) redraw = false;
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font, al_map_rgb(255, 255, 255), 375, 250 - 32, ALLEGRO_ALIGN_CENTER, "Gracias Braulio");
            al_flip_display();

           
    }

    al_destroy_font(font);
    al_destroy_display(disp);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}

class Cheno
{
public:
    Cheno();
    ~Cheno();

private:

};

Cheno::Cheno()
{
}

Cheno::~Cheno()
{
}
