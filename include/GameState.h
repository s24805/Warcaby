#ifndef GameState_h
#define GameState_h

#ifdef _WIN32
#include <SDL.h>
#include <SDL_image.h>
#endif

#ifdef __APPLE__
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#endif

#ifdef __linux
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#endif

#include "ApplicationState.h"
#include "Application.h"

enum SpriteList{
    EMPTY_PIECE,
    RED_PIECE,
    BLACK_PIECE,
    RED_KING,
    BLACK_KING,
    RED_PIECE_D1,
    RED_PIECE_D2,
    RED_PIECE_D3,
    RED_PIECE_D4,
    BLACK_PIECE_D1,
    BLACK_PIECE_D2,
    BLACK_PIECE_D3,
    BLACK_PIECE_D4,
    RED_KING_D1,
    RED_KING_D2,
    RED_KING_D3,
    RED_KING_D4,
    BLACK_KING_D1,
    BLACK_KING_D2,
    BLACK_KING_D3,
    BLACK_KING_D4,
    TOTAL_PIECES
};

class ApplicationStateManager;
class Button;
class CheckersBoard;
class Player;
class Texture;

class GameState: public ApplicationState{
public:
    GameState();
    ~GameState();
    void stateEnter();
    void stateEvent();
    StateEnum stateUpdate();
    void stateRender();
    bool stateExit();
private:
    bool loadMedia();
    bool gameOver();
    CheckersBoard *Board;
    Button *boardButtons;
    Player *Player1;
    Player *Player2;
    bool userQuit;
};


#endif /* GameState_h */
