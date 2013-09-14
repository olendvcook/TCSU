#include "Enemy.h"


Enemy::Enemy(sf::Texture pTexture, std::string pWord, sf::Vector2f pPosition, sf::Vector2f pVelocity):
	mString(pWord),
	mPosition(pPosition),
	mVelocity(pVelocity)
{
	mSprite.setTexture(pTexture);
}


Enemy::~Enemy(void)
{
}

void Enemy::update()
{
	mPosition += mVelocity;
	mAngle += mAngleVelocity;
	mSprite.setRotation(mAngle);
	mSprite.setPosition(mPosition);
}

bool Enemy::Hurt(char pChar)
{
	if(pChar == mString[0])
	{
		mString.erase(mString.begin());
		return true;
	}
	return false;
}

bool Enemy::isDead()
{
	if( mString.empty()) return true;
	return false;
}

//getters setters
std::string Enemy::getString()
{
	return mString;
}

void Enemy::setString(std::string pString)
{
	mString = pString;
}

sf::Vector2f Enemy::getPos()
{
	return mPosition;
}

void Enemy::setPos(sf::Vector2f pPosition)
{
	mPosition = pPosition;
}

sf::Vector2f Enemy::getVelocity()
{
	return mVelocity;
}

void Enemy::setVelocity(sf::Vector2f pVelocity)
{
	mVelocity = pVelocity;
}

sf::Sprite Enemy::getSprite()
{
	return mSprite;
}

void Enemy::setTexture(sf::Texture pTexture)
{
	mSprite.setTexture(pTexture);
}

void Enemy::setAngle(float pAngle)
{
	mAngle = pAngle;
}

float Enemy::getAngle()
{
	return mAngle;
}

void Enemy::setAngularVelocity(float pAngularVelocity)
{
	mAngleVelocity = pAngularVelocity;
}

float Enemy::getAngularVelocity()
{
	return mAngleVelocity;
}