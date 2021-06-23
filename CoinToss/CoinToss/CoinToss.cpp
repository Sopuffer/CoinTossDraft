#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "Input/InputManager.h"
using std::cout;
using std::endl;

int foo;

int main(int argc, char** argv) {
	cout << "Hello World" << endl;
	InputManager* test = new InputManager();
	cout << test->foo() << endl;
	delete test;
	test = nullptr;
	if (SDL_IMAGE_COMPILEDVERSION)
	{
		cout << "hej2" << endl;
	}
	return 0;
}
