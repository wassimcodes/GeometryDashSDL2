#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include "GameObject.h"
class RenderWindow
{
public:
    RenderWindow(const char* p_title, int p_w, int p_h);
    SDL_Texture* loadTexture(const char* p_filePath);
    void cleanUp();
    void clear();
    SDL_Rect render(GameObject& p_gameObject, float cameraX);
    void display();
    void renderBackground(SDL_Texture* backgroundTexture);
    SDL_Renderer* getRenderer() const;

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};