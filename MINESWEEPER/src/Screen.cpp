#include "Screen.h"

// Bấm vào ô menu
bool checkFocusWithRect(const int &x, const int &y, const SDL_Rect &rect)
{
	if (x > rect.x && x < rect.x + rect.w && y > rect.y && y < rect.y + rect.h)
		return true;
	return false;
}

int showMenu()
{
	screenWidth = 600;
	screenHeight = 600;
	SDL_SetWindowSize(window, screenWidth, screenHeight);
	SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
	static const int menuItem = 2;
	Texture textMenu[menuItem];
	bool choosed[menuItem] = {false, false};
	const char *labels[menuItem] = {"New Game",
									"Exit",
		                           };
	int posx = 0, posy = 0;

	for (int i = 0; i < menuItem; ++i)
		textMenu[i].loadFromRenderedText(labels[i], {0, 0, 0});

	SDL_Event event;
	while (true)
	{
		frameStart = SDL_GetTicks();
		// SDL_GetTicks() :lấy về tổng số miliseconds từ khi SDL được khởi tạo
		SDL_RenderClear(renderer);
		for (int i = 0; i < menuItem; ++i)
			textMenu[i].render((screenWidth - textMenu[i].getWidth()) / 2, (screenHeight - textMenu[i].getHeight()) * 1 / 2.5 + i * 70);
		while (SDL_PollEvent(&event) != 0) //A SDL event is some thing like a key press, mouse motion, joy button press, etc.
		{
			switch (event.type)
			{
			case SDL_QUIT:
				return Exit;
			case SDL_KEYDOWN:
				if (event.key.keysym.sym == SDLK_ESCAPE)
					return Exit;
			case SDL_MOUSEMOTION:
			{
				posx = event.motion.x;
				posy = event.motion.y;
				for (int i = 0; i < menuItem; ++i)
					if (checkFocusWithRect(posx, posy, textMenu[i].getRect()))
					{
						if (choosed[i] == false)
						{
							choosed[i] = true;
							textMenu[i].loadFromRenderedText(labels[i], {255, 0, 0});
						}
					}
					else
					{
						if (choosed[i] == true)
						{
							choosed[i] = false;
							textMenu[i].loadFromRenderedText(labels[i], {0, 0, 0});
						}
					}
			}
			break;
			case SDL_MOUSEBUTTONDOWN:
			{
				posx = event.button.x;
				posy = event.button.y;
				for (int i = 0; i < menuItem; ++i)
					if (checkFocusWithRect(posx, posy, textMenu[i].getRect()))
					{
						for (int j = 0; j < menuItem; ++j)
							textMenu[i].free();
						Mix_PlayChannel(-1, clickMenu, 0);
						return i;
					}
			}
			}
		}
		SDL_RenderPresent(renderer); ////Update screen
		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime)
			SDL_Delay(frameDelay - frameTime);
	}
}

//Hiển thị Game mode
int showGameMode()
{
	static const int gameRank = 3;
	Texture textMenu[gameRank];
	bool choosed[gameRank] = {false, false, false};
	const char *labels[gameRank] = {"Easy (9x9 10 mines)",
									"Medium (16x16 40 mines)",
									"Hard (20x20 80 mines)",
									};
	int posx = 0, posy = 0;

	for (int i = 0; i < gameRank; ++i)
		textMenu[i].loadFromRenderedText(labels[i], {0, 0, 0});

	SDL_Event event;
	while (true)
	{
		frameStart = SDL_GetTicks();
		SDL_RenderClear(renderer); // clear the window to black
		for (int i = 0; i < gameRank; ++i)
			textMenu[i].render((screenWidth - textMenu[i].getWidth()) / 2, (screenHeight - textMenu[i].getHeight()) * 1 / 3 + i * 60);
		while (SDL_PollEvent(&event) != 0)
		{
			switch (event.type)
			{
			case SDL_QUIT:
				return Quit;
			case SDL_KEYDOWN:
				if (event.key.keysym.sym == SDLK_ESCAPE)
					return Back;
			case SDL_MOUSEMOTION:
			{
				posx = event.motion.x;
				posy = event.motion.y;
				for (int i = 0; i < gameRank; ++i)
					if (checkFocusWithRect(posx, posy, textMenu[i].getRect()))
					{
						if (choosed[i] == false)
						{
							choosed[i] = true;
							textMenu[i].loadFromRenderedText(labels[i], {255, 0, 0});
						}
					}
					else
					{
						if (choosed[i] == true)
						{
							choosed[i] = false;
							textMenu[i].loadFromRenderedText(labels[i], {0, 0, 0});
						}
					}
			}
			break;
			case SDL_MOUSEBUTTONDOWN:
			{
				posx = event.button.x;
				posy = event.button.y;
				for (int i = 0; i < gameRank; ++i)
					if (checkFocusWithRect(posx, posy, textMenu[i].getRect()))
					{
						for (int j = 0; j < gameRank; ++j)
							textMenu[i].free();
						Mix_PlayChannel(-1, clickMenu, 0);
						return i;
					}
			}
			}
		}
		SDL_RenderPresent(renderer); // clear the window to black
		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime)
			SDL_Delay(frameDelay - frameTime);
	}
}

