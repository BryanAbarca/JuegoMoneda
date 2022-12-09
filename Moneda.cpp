#include "Moneda.h"


//Se crea una Moneda sin parametros
Moneda::Moneda() {
	jugar();
	
}



void Moneda::jugar() {
	int x = rand() %  2;
	x == 0 ? estado = "cara" : estado = "cruz";
}




string Moneda::getEstado()
{
	return estado;
}
