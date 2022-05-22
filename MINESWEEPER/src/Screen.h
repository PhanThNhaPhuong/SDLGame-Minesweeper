#pragma once
#include <SDL.h>
#include "Texture.h"
#include "Var.h"

bool checkFocusWithRect(const int &x, const int &y, const SDL_Rect &rect);
int showMenu();
int showGameMode();