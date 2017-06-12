#include <iostream>
using namespace std;

class Maths{
	private:
		double valorA;
		double valorB;
	public:
		Maths(double a, double b);
		double soma();
		double multiplicacao();
		double subtracao();
		double divisao();
		~Maths();
};