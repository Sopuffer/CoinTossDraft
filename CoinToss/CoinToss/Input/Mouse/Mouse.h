#pragma once
#include "../../stdafx.h"


class Mouse
{
	static const int MAXBUTTONS = 5;
public:
	Mouse();
	~Mouse();
	bool IsMouseButtonDown(int button);
	bool IsMouseButtonPressed(int button);
	bool IsMouseButtonReleased(int button);
	SDL_Point GetMousePosition();
	SDL_Point GetMouseMotion();
	void HandleEvents(SDL_Event& event);
	void LateUpdate(float deltaTime);
private:
	void SetButton(int buttonIndex, bool value);
	SDL_Point mousePosition;
	SDL_Point mouseMotion;
	bool m_bButtons[MAXBUTTONS];
	bool m_bButtonsLastFrame[MAXBUTTONS];
};

