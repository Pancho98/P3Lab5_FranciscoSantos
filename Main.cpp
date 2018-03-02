#include"Zoologico.h"
#include"Animal.h"
#include<vector>
#include<string>
#include <iostream>

using namespace std;

int main(){

	vector<Animal*>todos;
	string nombreZoo;
	int Zootam;
	int MaxPersonas;
	cout<<"Ingrese el nombre del Zoologico: "<<endl;
	cin>>nombreZoo;
	cout<<"Ingrese el tamaño de su Zoo: "<<endl;
	cin>>Zootam;
	cout<<"Ingrese el maximo de personas: "<<endl;
	cin>>MaxPersonas;

	Zoologico* zoo = new Zoologico(nombreZoo, Zootam, MaxPersonas);



	int opcion=1;
	while(opcion!=5){
		cout<<"1. Crear animal: "<<endl;
		cout<<"2. Transferir al Zoologico: "<<endl;
		cout<<"3. Listar animales del Zoologico: "<<endl;
		cout<<"4. Ordenar Alfabeticamente: "<<endl;
		cout<<"5. Salir del programa: "<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
					   //Animal
					   string especieA;
					   string nombreA;
					   int tamanoA;
					   int tipoA;

					   cout<<"Ingrese la especie del animal: "<<endl;
					   cin>>especieA;
					   cout<<"Ingrese el nombre del animal: "<<endl;
					   cin>>nombreA;
					   cout<<"Ingrese el tamaño del  animal: "<<endl;
					   cin>>tamanoA;
					   cout<<"Ingrese tipo: "<<endl;
					   cout<<"1. Artico"<<endl;
					   cout<<"2. Desertico"<<endl;
					   cout<<"3. Jungla"<<endl;
					   cout<<"4. Sabana"<<endl;
					   cin>>tipoA;

					   //patas
					   int patas;
					   int largoPatas;
					   string tipoPatas;

					   cout<<"Ingrese cantidad de patas: "<<endl;
					   cin>>patas;
					   cout<<"Ingrese largo de las patas: "<<endl;
					   cin>>largoPatas;
					   cout<<"Ingrese tipo de patas "<<endl;
					   cin>>tipoPatas;

					   Patas* pata=new Patas(patas, largoPatas, tipoPatas);


					   //Pelaje
					   string color;
					   int grosor;
					   int largoPelaje;

					   cout<<"Ingrese el color del Pelaje: "<<endl;
					   cin>>color;
					   cout<<"Ingrese el gresor del pelaje: "<<endl;
					   cin>>grosor;
					   cout<<"Ingrese el largo del pelaje: "<<endl;
					   cin>>largoPelaje;

					   Pelaje* pelaje=new Pelaje(color, grosor, largoPelaje);

					
					   //Ojos
					   string colorOjos;
					   int vision;

					   cout<<"Ingrese color de los ojos: "<<endl;
					   cin>>colorOjos;
					   cout<<"Ingrese si tienen vision nocturna "<<endl;
					   cout<<"1. Si  tiene: "<<endl;
					   cout<<"2. No tiene: "<<endl;
					   cin>>vision;

					   Ojos* ojos= new Ojos(colorOjos, vision);

					   //Orejas
					   int tamanoOrejas;
					   int audicion;

					   cout<<"Ingrese el tamaño de la oreja: "<<endl;
					   cin>>tamanoOrejas;
					   cout<<"Ingrese la capacidad de la audicion: "<<endl;
					   cin>>audicion;

					   Orejas* orejas = new Orejas(tamanoOrejas, audicion);

					   //Cola
					   int largoCola;
					   int pelo;

					   cout<<"Ingrese el largo de la Cola: "<<endl;
					   cin>>largoCola;
					   cout<<"Ingrese si tiene cola:"<<endl;
					   cout<<"1. Si tiene cola "<<endl;
					   cout<<"2. No tiene cola "<<endl;
					   cin>>pelo;

					   Cola* cola= new Cola(largoCola, pelo);

					   //Agrega el animal
					   Animal* animal= new Animal(especieA, nombreA, tamanoA, tipoA, pata, pelaje, ojos, orejas, cola);
					   todos.push_back(animal);
				   }
				   break;
			case 2:{
					  for(int i=0;i<todos.size();i++){
						  if(todos[i]->getTipo()==1){
							  zoo->setAnimales(todos[i], 1);
						  }
						  if(todos[i]->getTipo()==2){
							  zoo->setAnimales(todos[i],2);
						  }
						  if(todos[i]->getTipo()==3){
							  zoo->setAnimales(todos[i], 3);
						  }
						  if(todos[i]->getTipo()==4){
							  zoo->setAnimales(todos[i], 4);
						  }
					  }
				   }
				   break;
			case 3:{
					   zoo->ImprimeVectores();
				   }
				   break;
			case 4:{

				   }
				   break;
			case 5:{
					   delete zoo;
				   }
				   break;
		}
	}

	return 0;
}
