#include "Rational.h"
#include <iostream>
using namespace Ratio;

Rational::Rational(signed long num, signed long den)
	:numerator {num}, denominator {den}
{
	simplify();
}

void Rational::operator=(Rational r){
	this->numerator = r.numerator;
	this->denominator = r.denominator;
	simplify();
}

void Rational::simplify() {
	int n = this->numerator;
	int d = this->denominator;
	int r = 0;
	//Ricerca MCD tramite algoritmo di Eulero
	while (d != 0) {
		r = n % d;
		n = d;
		d = r;
	}
	this->numerator = this->numerator / n;
	this->denominator = this->denominator / n;
}

void Rational::print() {
	if (this->denominator != 1) {
		std::cout << this->numerator << " / " << this->denominator << " ovvero " << this->to_double() << std::endl;
	}
	else {
		std::cout << this->numerator << std::endl;
	}
}







