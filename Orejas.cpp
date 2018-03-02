#include"Orejas.h"
#include <iostream>
#include<string>

using namespace std;

Orejas::Orejas(int tamano, int audicion){
	this->tamano=tamano;
	this->audicion=audicion;
}

int Orejas::getTamano(){
	return this->tamano;
}

int Orejas::getAudicion(){
	return this->audicion;
}

Orejas::~Orejas(){

}
