// SFML T.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "PLEASE HELP ME!");

	while (window.isOpen())
	{
		sf::Event e;
		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
				window.close();
		}
	}

	return 0;
}