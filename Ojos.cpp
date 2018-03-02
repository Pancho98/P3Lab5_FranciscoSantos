#include"Ojos.h"
#include <iostream>
#include<string>

using namespace std;

Ojos::Ojos(string color, int visionNocturna){
	this->color=color;
	this->visionNocturna=visionNocturna;
}

string Ojos::getColor(){
	return this->color;
}

int Ojos::getVisionNocturna(){
	return this->visionNocturna;
}

Ojos::~Ojos(){

}
