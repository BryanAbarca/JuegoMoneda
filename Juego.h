#pragma once

#include <iostream>
#include "Moneda.h"
#include "Jugador.h"
using namespace std;
class juego {
private:
	int canJuegos;
public:
	juego();
	void jugar(Moneda m, Jugador j);
};





