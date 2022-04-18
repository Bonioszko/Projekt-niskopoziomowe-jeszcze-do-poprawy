all: compile link

compile:
	g++ -Isrc/include -c main.cpp
	g++ -Isrc/include -c funkcje.cpp

link:
	g++ main.o funkcje.o -o main  -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system
	main.exe