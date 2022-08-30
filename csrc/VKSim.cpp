#include "VKSim.h"

VKSim::VKSim(/* args */)
{
    if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_EVENTS) != 0) {
        assert(0);
    }
    main_window = SDL_CreateWindow(VKSim_WINDOW_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                    VKSim_WINDOW_WIDTH, VKSim_WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    main_renderer = SDL_CreateRenderer(main_window, -1, 
                    SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | 0);
    main_texture = SDL_CreateTexture(main_renderer, 
                    SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STREAMING, 
                    VKSim_WINDOW_WIDTH, VKSim_WINDOW_HEIGHT);
    keyboard_state.reserve(SDL_NUM_SCANCODES);
    reset();
}

VKSim::~VKSim()
{
    SDL_DestroyWindow(main_window);
    if (main_renderer) {
        SDL_DestroyRenderer(main_renderer);
    }
    SDL_Quit();
}

void VKSim::reset()
{
    uint32_t *rgb_p = new uint32_t[VKSim_WINDOW_NUMPIX];
    memset(rgb_p, 0, sizeof(uint32_t)*VKSim_WINDOW_NUMPIX);
    update(0,0,VKSim_WINDOW_NUMPIX,rgb_p);
    delete rgb_p;
    display();
}

void VKSim::update(
        uint64_t h_addr, uint64_t v_addr, 
        uint8_t r, uint8_t g, uint8_t b)
{
    update(h_addr, v_addr, 0x00000000|(r<<16)|(g<<8)|b );
}

void VKSim::update(uint64_t h_addr, uint64_t v_addr, uint32_t rgb)
{
    update(h_addr, v_addr, 1, &rgb);
}

void VKSim::update(
                uint64_t h_base_addr, uint64_t v_base_addr, 
                uint64_t num, uint32_t *rgb_p)
{
    void *pixels;
    int pitch;
    uint32_t *dst;
    assert(h_base_addr>=0&&h_base_addr<VKSim_WINDOW_WIDTH);
    assert(v_base_addr>=0&&v_base_addr<VKSim_WINDOW_HEIGHT);
    if (SDL_LockTexture(main_texture, NULL, &pixels, &pitch) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't lock texture: %s\n", SDL_GetError());
        assert(0);
    }
    dst = (uint32_t*)((uint8_t*)pixels+v_base_addr*pitch);
    dst = dst+h_base_addr;
    for(uint64_t i=0; i < num; i++)
    {
        *(dst+i) = 0x00FFFFFF & *(rgb_p+i);
    }
    SDL_UnlockTexture(main_texture);
}

void VKSim::display()
{
    int ret = read_event();
    if(ret==-1)
    {
        exit(0);
    }
    SDL_RenderCopy(main_renderer, main_texture, NULL, NULL);
    SDL_RenderPresent(main_renderer);
}

// Return -1 when esc is pressed.
// Else return whether buttons / switches are pressed.
int VKSim::read_event() {
    SDL_Event ev;
    SDL_PollEvent(&ev);
    switch (ev.type) {
    case SDL_QUIT: return -1;
    case SDL_WINDOWEVENT:
        if(ev.window.event == SDL_WINDOWEVENT_CLOSE) { return -1; }
        break;
    case SDL_KEYDOWN:
    case SDL_KEYUP:
        keyboard_event.push(std::make_pair(ev.key.keysym.scancode, ev.key.type==SDL_KEYDOWN));
        break;
    }
    return 0;
}

bool VKSim::get_keyboard_event(int *keycode, uint8_t *state)
{
    if(keyboard_event.empty() || keycode == NULL || state == NULL)
    {
        return false;
    }
    auto event = keyboard_event.front();
    keyboard_state[event.first] = event.second;
    *keycode = event.first;
    *state = event.second;
    return true;
}

const std::vector<uint8_t>& VKSim::get_keyboard_state()
{
    return keyboard_state;
}

