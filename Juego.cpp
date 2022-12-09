#include "Juego.h"



juego::juego() {
	canJuegos = 0;
}



void juego::jugar(Moneda m, Jugador j) {
	string x;
	int NJuegos = 0;
	string resultado;
	int cont ;
	cout << "Desea jugar (si o no): ";
	cin >> x;
	while (x =="si") {
		int i = 1;
		cout << "Cara o Cruz?  " ;
		cin >> resultado;
		cin.clear();
		cin.ignore(1024, '\n');
		cont = 0;
		NJuegos++;
		cout << endl;
		while (i <= 5)
		{
			cout << "Se lanza Moneda" << endl;
			j.lanzar(m);
			cout << "tiro #"<<i << ",  salio: " << m.getEstado() << " <ENTER>";
			cin.get();
			if (m.getEstado() == resultado) {
				cont++;
			}
			
			i++;
		}
		canJuegos++;
		(cont>=3) ? j.IncrementGanes() : j.IncrementPerdidos();
		(cont >= 3) ? cout<<endl<<"HAS GANADO!!!"<<endl : cout <<endl << "HAS PERDIDO!!!" << endl;
		cout << endl << endl;
		
		
		
		cout << "\t\t -Juego Numero:" << NJuegos << endl;
		cout << "\t\t -Nombre:" << j.getapodo() << endl;
		cout << "\t\t -Juegos realizados:" << j.getJuegosGanados() + j.getJuegosPerdidos() << endl;
		cout << "\t\t -Juegos ganados:" << j.getJuegosGanados()  << endl;
		cout << "\t\t -Juegos perdidos:" <<  j.getJuegosPerdidos() << endl << endl;
		
		
		
		cout <<endl<< "Desea jugar nuevamente? (si o no)   ";
		cin >> x;
		system("cls");
	}}
