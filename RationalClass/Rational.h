//Rational.h: Rational class
#pragma once
namespace Ratio {
	class Rational {

	public:
		Rational();
		Rational(signed long num, signed long den);
		void operator=(Rational r);
		signed long get_numerator() { return numerator; }
		signed long get_denominator() { return denominator; }
		void simplify();
		void print();
		double to_double() { return (double)numerator / denominator; }
	private:
		signed long numerator;
		signed long denominator;
	};
}