#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif

#include <ui/BasicWindow.h>
#include <system/CFFIPointer.h>
#include <system/CFFI.h>

#include <cstdlib>

namespace example {

    #ifdef INCLUDE_SDL
    //Other
    void example_init_sdl(int flags) {
        SDL_Init(flags);

        #ifdef INCLUDE_VULKAN
        volkInitialize();
        #endif
    }
    DEFINE_PRIME1v(example_init_sdl);

    //Window
    void apply_gc_window(value handle) {
        BasicWindow* window = (BasicWindow*)val_data(handle);
        delete window;
    }

    value example_create_window(HxString title, int width, int height) {
        BasicWindow* window = new BasicWindow(title.c_str(), width, height);
        return CFFIPointer(window, apply_gc_window);
    }
    DEFINE_PRIME3(example_create_window);
    #endif


}