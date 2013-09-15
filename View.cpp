#include "View.h"


View::View(void)
{
	mWindow.create(sf::VideoMode(WIDTH, HEIGHT), "TCSU!");
	font.loadFromFile("Assets/font.ttf");
}


View::~View(void)
{
}


void View::drawEnemies(float pInterpolation, std::vector<Enemy> *pEnemies)
{
	for(int i = 0; i < pEnemies->size(); i++)
	{
		sf::Text text;
		text.setFont(font);
		text.setColor(sf::Color::White);
		text.setString(pEnemies->operator[](i).getString());
		text.setPosition(pEnemies->operator[](i).getPos() * pInterpolation);
		mWindow.draw(text);
		sf::Sprite sprite = pEnemies->operator[](i).getSprite();
		sprite.setPosition(sprite.getPosition * pInterpolation);
		mWindow.draw(sprite);
	}
}