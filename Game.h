#pragma once

#include "Enums.h"
#include "Enemy.h"
#include <string>
#include <vector>
#include "WordsDatabase.h"
#include "View.h"

class Game
{
private:
	std::vector<Enemy> mEnemies;
	GAMESTATE mGamestate;
	GAMEDIFFICULTY mGameDifficulty;
	Enemy* mTargeted;
	WordsDatabase mWordDatabase;
public:

	View mView;
	Game(void);
	virtual ~Game(void);

	void Init();
	void Update();
	void Draw(float pInterpolation);
	void GetInput(sf::Event pEvent);
	void CheckHit(std::string pInput);
	void AddEnemy();
	//do i even need? just check for empty string in update and remove it? will that cause out of bounds shit?
	void RemoveEnemy(int pIndex); 
	//---------------------------



};

