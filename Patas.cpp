#include"Patas.h"
#include <iostream>

using namespace std;

Patas::Patas(int patas, int largo, string tipo){
	this->patas=patas;
	this->largo=largo;
	this->tipo=tipo;
}

int Patas::getPatas(){
	return this->patas;
}

int Patas::getLargo(){
	return this->largo;
}

string Patas::getTipo(){
	return this->tipo;
}

Patas::~Patas(){

}
