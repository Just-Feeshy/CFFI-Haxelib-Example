#pragma once

#ifdef INCLUDE_SDL
#include <SDL.h>
#endif

#ifdef INCLUDE_VULKAN
#include <volk.h>
#endif

namespace example {
    class BasicWindow {
        public:
            BasicWindow(const char* title, int width, int height);
            ~BasicWindow();
        private:
            #ifdef INCLUDE_SDL
            SDL_Window* sdl_window;
            #endif
    };
}