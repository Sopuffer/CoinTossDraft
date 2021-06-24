#pragma once
#include "../stdafx.h"
class Mouse;
class Keyboard;
class InputManager
{
	public:
		InputManager();
		~InputManager();
		bool IsKeyDown(SDL_Scancode key);
		bool IsKeyUp(SDL_Scancode key);
		bool IsMouseButtonDown(int button);
		bool IsMouseButtonUp(int button);
		SDL_Point GetMousePosition();
		SDL_Point GetMouseMovement();

		void HandleEvents(SDL_Event& event);
		void LateUpdate(float deltaTime);
	private:

		Keyboard* keyboardPtr = nullptr;
		Mouse* mousePtr = nullptr;
};

