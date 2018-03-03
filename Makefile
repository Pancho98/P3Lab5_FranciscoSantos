main.out:Zoologico.o Animal.o Main.o Patas.o Ojos.o Orejas.o Pelaje.o Cola.o
	g++ Zoologico.o Animal.o Main.o Patas.o Ojos.o Orejas.o Pelaje.o Cola.o -o main.out

Animal.o: Animal.cpp Animal.h Patas.h Pelaje.h Orejas.hOjos.h Cola.h
	g++ -c Animal.cpp

Zoologico.o: Zoologico.cpp Zoologico.h
	g++ -c Zoologico.cpp

Patas.o: Patas.cpp Patas.h
	g++ -c Patas.cpp

Pelaje.o: Pelaje.cpp Pelaje.h
	g++ -c Pelaje.cpp

Ojos.o: Ojos.cpp Ojos.h
	g++ -c Ojos.cpp

Orejas.o: Orejas.cpp Orejas.h
	g++ -c Orejas.cpp

Cola.o: Cola.cpp Cola.h
	g++ -c Cola.cpp

Main.o: Main.cpp Zoologico.h Animal.h 
	g++ -c Main.cpp
