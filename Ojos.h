#ifndef OJOS_H
#define OJOS_H
#include<string>

using namespace std;

class Ojos{
	private:
		string color;
		int visionNocturna;

	public:
		Ojos(string, int);
		string getColor();
		int getVisionNocturna();
		~Ojos();
};

#endif
