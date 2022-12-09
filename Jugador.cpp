#include "Jugador.h"



Jugador::Jugador(string apodo) :
	juegosPerdidos(0), juegosGanados(0), apodo(apodo) {
	cout<< "se ha creado un Jugador"<<endl;
}



int Jugador::getJuegosPerdidos() {
	return juegosPerdidos;
}



int Jugador::getJuegosGanados() {
	return juegosGanados;
}
string Jugador::getapodo()  {
	return apodo;
}
void  Jugador::setapodo(string apodo){
	apodo = apodo;
}

void Jugador::IncrementGanes() { 
	juegosGanados++; 
};
void Jugador::IncrementPerdidos() { 
	juegosPerdidos++; 
};
void Jugador::lanzar(Moneda& m) {
	m.jugar();
}
