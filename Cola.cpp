#include"Cola.h"
#include <iostream>

using namespace std;

Cola::Cola(int largo, int pelo){
	this->largo=largo;
	this->pelo=pelo;
}

int Cola::getLargo(){
	return this->largo;
}

int Cola::getPelo(){
	return this->pelo;
}

Cola::~Cola(){

}
