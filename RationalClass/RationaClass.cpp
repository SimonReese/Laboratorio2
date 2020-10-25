//RationalClass.cpp
#include <iostream>
#include <string>
#include "Rational.h"


Ratio::Rational operator+(Ratio::Rational& l, Ratio::Rational& r);
Ratio::Rational operator-(Ratio::Rational l, Ratio::Rational r);
Ratio::Rational operator*(Ratio::Rational l, Ratio::Rational r);
Ratio::Rational operator/(Ratio::Rational l, Ratio::Rational r);
bool operator==(Ratio::Rational l, Ratio::Rational r);

int main()
{
	int n, d;
	std::cout << "Inserisci numeratore1: ";
	std::cin >> n;
	std::cout << "Inserisci denominatore1: ";
	std::cin >> d;
	Ratio::Rational r1 (n, d);

	std::cout << "\nInserisci numeratore2: ";
	std::cin >> n;
	std::cout << "Inserisci denominatore2: ";
	std::cin >> d;
	Ratio::Rational r2(n, d);

	//Test funzioni membro
	std::cout << "Somma: ";
	Ratio::Rational tmp = r1 + r2;
	tmp.print();

	std::cout << "Differenza: ";
	tmp = r1 - r2;
	tmp.print();

	std::cout << "Moltiplicazione: ";
	tmp = r1 * r2;
	tmp.print();

	std::cout << "Divisione: ";
	tmp = r1 / r2;
	tmp.print();
}


Ratio::Rational operator+(Ratio::Rational& l, Ratio::Rational& r) {
	signed long denom = l.get_denominator() * r.get_denominator();
	signed long num = (l.get_numerator() * r.get_denominator()) + (r.get_numerator() * l.get_denominator());
	Ratio::Rational result(num, denom);
	return result;
}

Ratio::Rational operator-(Ratio::Rational l, Ratio::Rational r) {
	signed long denom = l.get_numerator() * r.get_denominator();
	signed long num = (l.get_numerator() * r.get_denominator()) - (r.get_numerator() * l.get_denominator());
	Ratio::Rational result(num, denom);
	return result;
}

Ratio::Rational operator*(Ratio::Rational l, Ratio::Rational r) {
	Ratio::Rational result(l.get_numerator() * r.get_numerator(), l.get_denominator() * r.get_denominator());
	return result;
}

Ratio::Rational operator/(Ratio::Rational l, Ratio::Rational r) {
	Ratio::Rational result(l.get_numerator() * r.get_denominator(), l.get_denominator() * r.get_numerator());
	return result;
}

bool operator==(Ratio::Rational l, Ratio::Rational r) {
	l.simplify();
	r.simplify();
	if (l.get_numerator() == r.get_numerator() && l.get_denominator() == r.get_denominator()) {
		return true;
	}
	return false;
}
