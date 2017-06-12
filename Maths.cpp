#include "Maths.h"

Maths::Maths(double a, double b){
	valorA = a;
	valorB = b;
	cout << "Objeto criado com sucesso." << endl;
}

double Maths::soma(){
	return valorA + valorB;
}

double Maths::subtracao(){
	return valorA - valorB;
}