#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H
#include"Animal.h"
#include<string>
#include<vector>

using namespace std;


class Zoologico{
	private:
		string nombre;
		int tamano;
		int personas;
		vector<Animal*>Artica;
		vector<Animal*>Desertica;
		vector<Animal*>Jungla;
		vector<Animal*>Sabana;

		

	public:
		Zoologico(string, int, int);
		string getNombre();
		int getTamano();
		int getCantPersona();
		void setAnimales(Animal*, int);
		void ImprimeVectores();
		vector<Animal*>getArtica();
		vector<Animal*>getDesertica();
		vector<Animal*>getJungla();
		vector<Animal*>getSabana();

		

		//
		~Zoologico();

};


#endif
