#ifndef PELAJE_H
#define PELAJE_H
#include<string>

using namespace std;

class Pelaje{
	private:
		string color;
		int grosor;
		int largo;

	public:
		Pelaje(string, int, int);
		string getColor();
		int getGrosor();
		int getLargo();

		~Pelaje();
};

#endif
