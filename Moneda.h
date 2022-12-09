#pragma once
#include <iostream>
#include <time.h>
#include <string>
using namespace std;



class Moneda {
private:
	string estado;
public:
	Moneda();
	void jugar();
	string getEstado();
};


