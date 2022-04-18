#ifndef FUNKCJE_H
#define FUNKCJE_H

#include <SFML/Graphics.hpp>

int sprawdzanie_ruchu(int tablica[8][8], int x, int y, int grana, int przeciwna);
void resetowaniegry(int tablica[8][8]);
void wstawianie(int tablica[8][8], int x, int y, int grana, int przeciwna);
int sprawdzanieGry(int tablica[8][8]);

#endif
