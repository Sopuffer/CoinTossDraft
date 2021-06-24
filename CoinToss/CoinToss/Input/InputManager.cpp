#include "InputManager.h"
#include <SDL.h>
#include "Mouse/Mouse.h"
#include "Keyboard/Keyboard.h"
InputManager::InputManager()
{
    keyboardPtr = new Keyboard();
    mousePtr = new Mouse();
}

InputManager::~InputManager()
{
}

bool InputManager::IsKeyDown(SDL_Scancode key)
{
    return false;
}

bool InputManager::IsKeyUp(SDL_Scancode key)
{
    return false;
}

bool InputManager::IsMouseButtonDown(int button)
{
    return false;
}

bool InputManager::IsMouseButtonUp(int button)
{
    return false;
}

SDL_Point InputManager::GetMousePosition()
{
    return SDL_Point();
}

SDL_Point InputManager::GetMouseMovement()
{
    return SDL_Point();
}

void InputManager::HandleEvents(SDL_Event& event)
{
}

void InputManager::LateUpdate(float deltaTime)
{
}
