#pragma once
#include <SDL.h>
class InputManager;
class CTPlayer
{
public:
	CTPlayer();
	~CTPlayer();

	InputManager* inputManager;
	
};