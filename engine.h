//
// Created by Jaret Screws on 1/5/22.
//

#ifndef SCREW_ENGINE_ENGINE_H
#define SCREW_ENGINE_ENGINE_H

#include "gui.h"

#include <SDL.h>

namespace se {
    class engine {
    public:
        engine();
        ~engine();
        void init();
        void run();
        void teardown();
    private:
        gui m_gui;

        SDL_Window* m_window{};
        SDL_GLContext m_glContext{};
    };
}


#endif //SCREW_ENGINE_ENGINE_H
