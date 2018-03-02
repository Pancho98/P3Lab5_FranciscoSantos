#ifndef PATAS_H
#define PATAS_H
#include<string>

using namespace std;

class Patas{
	private:
		int patas;
		int largo;
		string tipo;

	public:
		Patas(int, int, string);
		int getPatas();
		int getLargo();
		string getTipo();
		~Patas();

};

#endif
