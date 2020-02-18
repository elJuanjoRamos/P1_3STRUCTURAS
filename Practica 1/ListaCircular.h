#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "NodoCircular.h";
using namespace std;
class ListaCircular
{
private:
	NodoCircular* primero;
	NodoCircular* ultimo;
public :

	ListaCircular();
	void insertar(string n, string r);
	void recorrer();
	void GenerarGrafica(string nombre);
	string buscarArchivo(int dato);
	void limpiar();
	bool esVacia();
	NodoCircular* buscar(string nombre);
};

