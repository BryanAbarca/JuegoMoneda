#pragma once
#include <string>
#include "Moneda.h"

using namespace std;

class Jugador {
private:
	int juegosPerdidos;
	int juegosGanados; 
	string apodo;
public:
	Jugador(string);
	int getJuegosPerdidos();
	int getJuegosGanados();
	void IncrementGanes();
	void IncrementPerdidos();
	string getapodo() ;
	void setapodo(string);
	void lanzar(Moneda&);
};

