#ifndef WINDOWMANAGER
#define WINDOWMANAGER

#include <string>

#include <SDL.h>
#include <external/glad/glad.h>

using namespace std;

class WindowManager
{
public:      
    void Init(
        string windowName, bool fullscreen, unsigned int windowSizeX=800, unsigned int windowSizeY=600, 
        unsigned int windowPosX=100, unsigned int WindowPosY=100);
    void Update();
    void Exit();

private:
    SDL_Window* window;
};

#endif