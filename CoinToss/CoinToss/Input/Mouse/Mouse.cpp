#include "Mouse.h"
#include <SDL.h>
Mouse::Mouse()
{
}

Mouse::~Mouse()
{
}

bool Mouse::IsMouseButtonDown(int button)
{
    return button != 0;
}

bool Mouse::IsMouseButtonPressed(int button)
{
    return false;
}

bool Mouse::IsMouseButtonReleased(int button)
{
    return false;
}

SDL_Point Mouse::GetMousePosition()
{
    return mousePosition;
}

SDL_Point Mouse::GetMouseMotion()
{
    return mouseMotion;
}

void Mouse::HandleEvents(SDL_Event& event)
{
}

void Mouse::LateUpdate(float deltaTime)
{
}

void Mouse::SetButton(int buttonIndex, bool value)
{
}
