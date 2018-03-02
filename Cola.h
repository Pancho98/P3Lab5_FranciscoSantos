#ifndef COLA_H
#define COLA_H

using namespace std;

class Cola{
	private:
		int largo;
		int pelo;

	public:
		Cola(int, int);
		int getLargo();
		int getPelo();
		~Cola();
};

#endif
