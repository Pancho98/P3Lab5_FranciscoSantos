#include"Pelaje.h"
#include <iostream>

using namespace std;

Pelaje::Pelaje(string color, int grosor, int largo){
	this->color=color;
	this->grosor=grosor;
	this->largo=largo;
}

string Pelaje::getColor(){
	return this->color;
}

int Pelaje::getGrosor(){
	return this->grosor;
}

int Pelaje::getLargo(){
	return this->largo;
}

Pelaje::~Pelaje(){

}
