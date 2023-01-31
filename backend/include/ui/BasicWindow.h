#pragma once

#ifdef INCLUDE_SDL
#include <SDL.h>
#elif INCLUDE_SDL_LIB
#include <SDL2/SDL.h>
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
            #if defined(INCLUDE_SDL) || defined(INCLUDE_SDL_LIB)
            SDL_Window* sdl_window;
            #endif
    };
}