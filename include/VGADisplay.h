#pragma once
#include <SDL2/SDL.h>
#include "encode.h"
#include <assert.h>

class VGADisplay
{
private:
    SDL_Window *main_window;
    SDL_Renderer *main_renderer;
    SDL_Texture *main_texture;
public:
    VGADisplay(/* args */);
    ~VGADisplay();
    void reset();
    void update(uint64_t h_addr, uint64_t v_addr, 
                uint8_t r, uint8_t g, uint8_t b);
    void update(uint64_t h_addr, uint64_t v_addr, uint32_t rgb);
    void update(uint64_t h_base_addr, uint64_t v_base_addr, 
                uint64_t num, uint32_t *rgb_p);
    void display();
    int read_event();
};
