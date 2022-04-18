#include <SFML/Graphics.hpp>
#include <math.h>
#include "funkcje.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::RectangleShape pole;
    sf::CircleShape pionekbialy;
    sf::CircleShape pionekczarny;
    pole.setSize(sf::Vector2f(100, 100));
    pole.setFillColor(sf::Color{0, 255, 0, 130});
    pole.setOutlineColor(sf::Color::Black);
    pionekbialy.setRadius(45);
    pionekbialy.setPointCount(1000000);
    pionekczarny.setRadius(45);
    pionekczarny.setPointCount(1000000);
    pionekbialy.setFillColor(sf::Color::White);
    pionekczarny.setFillColor(sf::Color::Black);
    pole.setOutlineThickness(1);
    pole.setPosition(10, 10);
    int tablica[8][8];
    int tablicadotur[10000];
    int ruchy = 1;
    int tury = 0;
    resetowaniegry(tablica);
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed)
            {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                int x = mousePos.x / 100;
                int y = mousePos.y / 100;
                int z = 1;
                if (ruchy == 1)
                {
                    z = 2;
                }
                if (ruchy == 2)
                {
                    z = 1;
                }

                if (sprawdzanie_ruchu(tablica, x, y, ruchy, z) == 1 && tablica[x][y] != 1 && tablica[x][y] != 2)
                {
                    wstawianie(tablica, x, y, ruchy, z);

                    if (ruchy == 1)
                        ruchy = 2;
                    else
                        ruchy = 1;
                }
            }
        }
        window.clear();
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                pole.setPosition(i * 100, j * 100);
                window.draw(pole);
                if (tablica[i][j] == 2)
                {
                    pionekbialy.setPosition(i * 100 + 5, j * 100 + 5);
                    window.draw(pionekbialy);
                }
                if (tablica[i][j] == 1)
                {
                    pionekczarny.setPosition(i * 100 + 5, j * 100 + 5);
                    window.draw(pionekczarny);
                }
            }
        }
        if (sprawdzanieGry(tablica) == 1)
        {
            window.close();
        }

        window.display();
    }

    return 0;
}