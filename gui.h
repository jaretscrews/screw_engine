//
// Created by Jaret Screws on 1/5/22.
//

#ifndef SCREW_ENGINE_GUI_H
#define SCREW_ENGINE_GUI_H

#include <SDL.h>
#include <imgui.h>

namespace se {
    class gui {
    public:
        void init(SDL_Window*, SDL_GLContext);
        static void handleEvent(SDL_Event*);
        void drawFrame(SDL_Window*) const;
        static void teardown();
    private:
        ImGuiIO m_io;
    };
}


#endif //SCREW_ENGINE_GUI_H
