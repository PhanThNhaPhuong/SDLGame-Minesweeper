#include "Var.h"

// Giới hạn fps
extern const int FPS; 
extern const int frameDelay; //thời gian máy render xong 1 frame
Uint32 frameStart; //thời gian bắt đầu 1 frame
unsigned int frameTime; //thời gian thực sự máy tính tính toán và render xong 1 frame từ lúc bắt đầu

// Biến window và kích cỡ
SDL_Window *window;
int screenWidth = 500;
int screenHeight = 500;

// The window renderer
SDL_Renderer *renderer;

// Font chữ trong game
TTF_Font *fGame;

// Biến in ra chữ trong game
Texture gGameOver;
Texture gMineLeftTexture;
Texture gPlayAgainTexture;
Texture gWin;

// Biến âm thanh trong game
Mix_Chunk *clickMenu;
Mix_Chunk *openCell;
Mix_Chunk *flag;
Mix_Chunk *unFlag;
Mix_Chunk *mineFounded;
Mix_Music *winning;
Texture gameSound;
bool isMute;

// Biến để cắt ảnh các ô số và mìn
SDL_Rect spriteClips[BUTTON_SPRITE_TOTAL];
Texture buttonSpriteSheetTexture;

// Kích cỡ một ô mìn
extern const int CELL_SIZE;
extern const int BUTTON_SPRITE_TOTAL;

// Kích cỡ sân mìn
int rowSize;
int columnSize;

// Tổng số mìn
int numOfMine;

// Vị trí sân mìn
int DISTANCE_BETWEEN;

// Sân mìn mẫu
std::vector<std::vector<int>> board(rowSize + 2, std::vector<int>(columnSize + 2, 0));
//vector: thư viện STL: vùng chứa, thuật toán, vòng lặp

// Sân mìn người chơi sẽ tương tác
std::vector<std::vector<int>> sBoard(rowSize + 2, std::vector<int>(columnSize + 2, COVER));
std::vector<std::vector<Button>> gButtons(rowSize + 2, std::vector<Button>(columnSize + 2));

// Biến trò chơi
bool gameOver = false;
bool isWinning = false;
int countMineLeft;
std::stringstream mineLeft;
