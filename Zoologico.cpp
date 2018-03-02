#include"Zoologico.h"
#include <iostream>

using namespace std;

Zoologico::Zoologico(string nombre, int tamano, int personas){
	this->nombre=nombre;
	this->tamano=tamano;
	this->personas=personas;
}

string Zoologico::getNombre(){
	return this->nombre;
}

int Zoologico::getTamano(){
	return this->tamano;
}

int Zoologico::getCantPersona(){
	return this->personas;
}

vector<Animal*> Zoologico:: getArtica(){
	return Artica;
}

vector<Animal*> Zoologico::getDesertica(){
	return Desertica;
}

vector<Animal*> Zoologico::getJungla(){
	return Jungla;
}

vector<Animal*> Zoologico::getSabana(){
	return Sabana;
}

void Zoologico::setAnimales(Animal* animal, int tipo){
	if(tipo==1){
		Artica.push_back(animal);
	}
	if(tipo==2){
		Desertica.push_back(animal);
	}
	if(tipo==3){
		Jungla.push_back(animal);
	}
	if(tipo==4){
		Sabana.push_back(animal);
	}
}

void Zoologico::ImprimeVectores(){
	cout<<"Articos: "<<endl;
	for(int i=0;i<Artica.size();i++){
		cout<<Artica[i]->getNombre()<<" "<<Artica[i]->getEspecie()<<endl;
	}
	cout<<"Deserticos: "<<endl;
	for(int i=0;i<Desertica.size();i++){
		cout<<Desertica[i]->getNombre()<<" "<<Desertica[i]->getEspecie()<<endl;
	}
	cout<<"Jungla: "<<endl;
	for(int i=0;i<Jungla.size();i++){
		cout<<Jungla[i]->getNombre()<<" "<<Jungla[i]->getEspecie()<<endl;
	}
	cout<<"Sabana"<<endl;
	for(int i=0;i<Sabana.size();i++){
		cout<<Sabana[i]->getNombre()<<" "<<Sabana[i]->getEspecie()<<endl;
	}
}

Zoologico::~Zoologico(){

}
