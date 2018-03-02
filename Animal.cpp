#include"Animal.h"
#include <iostream>

using namespace std;

Animal:: Animal(string especie, string nombre, int tamano,int tipo ,Patas* patas, Pelaje* pelaje, Ojos* ojos, Orejas* orejas, Cola* cola){
	this->especie=especie;
	this->nombre=nombre;
	this->tamano=tamano;
	this->tipo=tipo;
	this->patas=patas;
	this->pelaje=pelaje;
	this->ojos=ojos;
	this->orejas=orejas;
	this->cola=cola;
}

string Animal::getEspecie(){
	return this->especie;
}

string Animal::getNombre(){
	return this->nombre;
}

int Animal::getTamano(){
	return this->tamano;
}

int Animal::getTipo(){
	return this->tipo;
}

Animal::~Animal(){

}
