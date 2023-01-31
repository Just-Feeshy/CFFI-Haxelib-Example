#include <ui/BasicWindow.h>

namespace example {
    BasicWindow::BasicWindow(const char* title, int width, int height) {
        #if defined(INCLUDE_SDL) || defined(INCLUDE_SDL_LIB)

        int flags = 0;

        flags |= SDL_WINDOW_SHOWN;
        flags |= SDL_WINDOW_FULLSCREEN;
        flags |= SDL_WINDOW_VULKAN;

        sdl_window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, flags);

        #endif
    }

    BasicWindow::~BasicWindow() {
        #if defined(INCLUDE_SDL) || defined(INCLUDE_SDL_LIB)

        if(sdl_window != nullptr) {
            SDL_DestroyWindow(sdl_window);
            sdl_window = 0;
        }

        #endif
    }
}