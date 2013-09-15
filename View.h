#pragma once

#include <SFML\Graphics.hpp>
#include "Enums.h"
#include "Enemy.h"
#include <vector>

class View
{
private:
	sf::Font font;
public:
	sf::RenderWindow mWindow;

	View(void);
	virtual ~View(void);

	void drawEnemies(float pInterpolation, std::vector<Enemy> *pEnemies);
};

