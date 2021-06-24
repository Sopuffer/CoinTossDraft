#pragma once
class Keyboard
{
public:
	Keyboard();
	~Keyboard();
	bool IsKeyDown(SDL_Scancode key);
	bool IsKeyUp(SDL_Scancode key);

	void HandleEvents(SDL_Event& event);
	void LateUpdate(float deltaTime);

private:
	void SetKey(SDL_Scancode key, bool value);
	bool Keys[SDL_NUM_SCANCODES];
	bool KeysLastFrame[SDL_NUM_SCANCODES];


};

