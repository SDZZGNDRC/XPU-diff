#pragma once
#include <SDL2/SDL.h>
#include "encode.h"
#include <assert.h>
#include <vector>
#include <queue>
#include <utility>

class VKSim
{
private:
    SDL_Window *main_window;
    SDL_Renderer *main_renderer;
    SDL_Texture *main_texture;
    std::vector<uint8_t> keyboard_state;
    std::queue<std::pair<int, uint8_t>> keyboard_event; // the first element is the scancode, while the last element imply the key state
public:
    VKSim(/* args */);
    ~VKSim();
    void reset();
    void update(uint64_t h_addr, uint64_t v_addr, 
                uint8_t r, uint8_t g, uint8_t b);
    void update(uint64_t h_addr, uint64_t v_addr, uint32_t rgb);
    void update(uint64_t h_base_addr, uint64_t v_base_addr, 
                uint64_t num, uint32_t *rgb_p);
    void display();
    int read_event();
    bool get_keyboard_event(int *keycode, uint8_t *state);
    const std::vector<uint8_t>& get_keyboard_state();
};
