#include <bits/stdc++.h>
#include "Juego.h"
using namespace std;

int main () {
	srand(time(NULL));
	Moneda m;
	string nombre;
	cout<<"Cual es tu nombre?\n";
	cin>>nombre;
	juego j;
	Jugador p(nombre);
	j.jugar(m,p);
	cin.get();
	
	
	
	
	return 0;
}

