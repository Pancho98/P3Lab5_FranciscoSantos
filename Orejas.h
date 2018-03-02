#ifndef OREJAS_H
#define OREJAS_H
#include<string>

using namespace std;

class Orejas{
	private:
		int tamano;
		int audicion;

	public:
		Orejas(int, int);
		int getTamano();
		int getAudicion();
		~Orejas();

};

#endif
