#pragma once

#include <string>
#include <SFML\Graphics.hpp>
#include "Enums.h"
class Enemy
{
private:
	std::string mString;
	sf::Vector2f mPosition;
	sf::Vector2f mVelocity;
	sf::Sprite mSprite;
	float mAngle;
	float mAngleVelocity;
public:
	Enemy(sf::Texture pTexture, std::string pWord = "NULL" , sf::Vector2f pPosition = sf::Vector2f(WIDTH/2, -5), sf::Vector2f pVelocity = sf::Vector2f(0,-2));
	virtual ~Enemy(void);
	void update();
	bool Hurt(char pChar);
	bool isDead();

	//getters setters
	std::string getString();
	void setString(std::string pString);
	sf::Vector2f getPos();
	void setPos(sf::Vector2f pPosition);
	sf::Vector2f getVelocity();
	void setVelocity(sf::Vector2f pVelocity);
	sf::Sprite getSprite();
	void setTexture(sf::Texture pTexture);
	void setAngle(float pAngle);
	float getAngle();
	void setAngularVelocity(float pAngularVelocity);
	float getAngularVelocity();
};

