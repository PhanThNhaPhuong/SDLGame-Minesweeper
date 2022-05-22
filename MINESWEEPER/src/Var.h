#pragma once //include thư viện 1 lần, tránh sự trùng lặp khi gọi file .h
//file .h: file thư viện mình tự viết ra, dùng để khai báo thư viện, hàm, class
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <sstream>
#include <vector>
#include "Texture.h"
#include "Logic.h"
// Giới hạn fps                
const int FPS = 24;
const int frameDelay = 1000 / FPS;
extern Uint32 frameStart;
extern unsigned int frameTime;

// Biến window và kích cỡ
extern SDL_Window *window;
extern int screenWidth;
extern int screenHeight;

// The window renderer
extern SDL_Renderer *renderer;

// Font chữ trong game
extern TTF_Font *fGame;

// Biến in ra chữ trong game
extern Texture gGameOver;
extern Texture gMineLeftTexture;
extern Texture gPlayAgainTexture;
extern Texture gWin;

// Biến âm thanh trong game
extern Mix_Chunk *clickMenu;
extern Mix_Chunk *openCell;
extern Mix_Chunk *flag;
extern Mix_Chunk *unFlag;
extern Mix_Chunk *mineFounded;
extern Mix_Music *winning;
extern Texture gameSound;
extern bool isMute;

// Kích cỡ một ô mìn
const int CELL_SIZE = 32;
const int BUTTON_SPRITE_TOTAL = 12;

// Biến để cắt ảnh các ô số và mìn
extern SDL_Rect spriteClips[BUTTON_SPRITE_TOTAL];
extern Texture buttonSpriteSheetTexture;

// Tổng số mìn
extern int numOfMine;

// Kích cỡ sân mìn
extern int rowSize;
extern int columnSize;

// Vị trí sân mìn
extern int DISTANCE_BETWEEN;

// Sân mìn mẫu
extern std::vector<std::vector<int>> board;

// Sân mìn người chơi sẽ tương tác
extern std::vector<std::vector<int>> sBoard;
extern std::vector<std::vector<Button>> gButtons;


// Biến trò chơi
extern int countMineLeft;
extern bool gameOver;
extern bool isWinning;
extern std::stringstream mineLeft;

enum title //enum : kiểu dữ liệu liệt kê
{
	BLANK,
	MINE = 9,
	COVER,
	FLAG
};

enum gameModeSelect
{
	Easy,
	Medium, 
	Hard,
};

enum menuSelect
{
	NewGame,
	Exit,
	Back = 4,
	Quit, 
};
