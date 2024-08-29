#include <SDL.h>
#include <SDL_image.h>
#include "Vector2.h"
#include "GameObject.h"

GameObject::GameObject(Vector2f p_pos, SDL_Texture* p_tex)
    : pos(p_pos), tex(p_tex), rotation(0.0f)
{
    objectSize.x = 0;
    objectSize.y = 0;
    objectSize.w = 320;
    objectSize.h = 320;
}

SDL_Texture* GameObject::getTex()
{
    return tex;
}

SDL_Rect GameObject::getObjectSize()
{
    return objectSize;
}
