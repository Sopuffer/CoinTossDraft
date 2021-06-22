#pragma once
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
using std::cout;
using std::endl;



int main(int argc, char** argv) {
	cout << "Hello World" << endl;
	if (SDL_IMAGE_COMPILEDVERSION)
	{
		cout << "hej2" << endl;
	}
	return 0;
}
