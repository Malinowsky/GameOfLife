#include "engine.h"

#ifndef GAME_H
#define GAME_H


class Game: public Engine {
protected:
	Game() : Engine() {}
private:
	virtual ~Game(){}
	Game(const Game& cop);
	Game& operator = (const Game& cop);
public:
	void Play();
	virtual void View();
};
#endif // GAME_H