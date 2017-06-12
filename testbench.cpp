#include <iostream>
#include <iomanip>
#include "Maths.h"

using namespace std;

int main(){
  double a = 11.03;
  double b = 29.47;
  Maths conta(a,b);


	cout << a <<" + "<< b <<" = " << conta.soma() << endl;
	cout << a <<" - "<< b <<" = " << conta.subtracao() << endl;
	cout << a <<" * "<< b <<" = " << conta.multiplicacao() << endl;
	cout << a <<" / "<< b <<" = " << fixed << setprecision(5) << conta.divisao() << endl;

	return 0;
}