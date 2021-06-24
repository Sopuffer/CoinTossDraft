#include "../../stdafx.h"

#include "Keyboard.h"
#include <sdl.h>
void Keyboard::SetKey(SDL_Scancode key, bool value)
{
}

Keyboard::Keyboard()
{
    for (int i = 0; i < SDL_NUM_SCANCODES; i++)
    {
        Keys[i] = false;
        KeysLastFrame[i] = false;
    }
}

Keyboard::~Keyboard()
{
}

bool Keyboard::IsKeyDown(SDL_Scancode key)
{
    return (Keys[key] == true
        && KeysLastFrame[key] == false);
}

bool Keyboard::IsKeyUp(SDL_Scancode key)
{
    return (Keys[key] == false
        && KeysLastFrame[key] == true);
}



void Keyboard::HandleEvents(SDL_Event& event)
{
}

void Keyboard::LateUpdate(float deltaTime)
{
}
