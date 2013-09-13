#include <SFML/Graphics.hpp>

#include <Windows.h>
#include <iostream>
#include "WordsDatabase.h"
//Constant Game Speed indepenent of Variable FPS Game Loop implementation
//USING: http://www.koonsolo.com/news/dewitters-gameloop/

//TICKS_PER_SECOND = Update Speed
const int TICKS_PER_SECOND = 60;
const int SKIP_TICKS = 1000 / TICKS_PER_SECOND;
const int MAX_FRAMESKIP = 5;
const int WIDTH = 640;
const int HEIGHT = 480;

//int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
int main()
{
	//Initialize variables to regulate update speed
	sf::Clock clock;
	int nextGameTick = clock.getElapsedTime().asMilliseconds();
	int loops;
	float interpolation;
	//--------------------------------------------
	WordsDatabase wd(eEASY);
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "TCSU!");
	std::cout << wd.GetBoss();
    while (window.isOpen())
    {
		window.clear();

		//std::cout << wd.GetBoss(1) + "\n";
		loops = 0;

		//input here
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //controls update speed
		while (clock.getElapsedTime().asMilliseconds() > nextGameTick && loops < MAX_FRAMESKIP)
		{

			//updates here

			nextGameTick += SKIP_TICKS;
			loops++;
		}

		//calculate interpolation to (try to) smooth rendering between update
		interpolation = float(clock.getElapsedTime().asMilliseconds() + SKIP_TICKS - nextGameTick)
			/ float(SKIP_TICKS);

		//draw methods here



        window.display();
    }

    return 0;
}