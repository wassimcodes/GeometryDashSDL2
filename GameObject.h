#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include "Vector2.h"

//everything rendererd to the screen
class GameObject
{
public:
    GameObject(Vector2f p_pos, SDL_Texture* p_tex);
    Vector2f& getPos() { return pos; }
    SDL_Texture* getTex();
    SDL_Rect getObjectSize();
    float getRotation() const { return rotation; }
    void setRotation(float angle) { rotation = angle; }
private:
    Vector2f pos;
    SDL_Rect objectSize;
    SDL_Texture* tex;
    float rotation;
};