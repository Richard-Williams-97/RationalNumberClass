#include "Rational.h"

	Rational::Rational(int n, int d)
	{
		numerator = d < 0 ? -n : n;
		denominator = d < 0 ? -d : d;
		reduce();
	}

	

	Rational Rational::add(const Rational& a) {

		Rational r;
		

		r.numerator = a.numerator * denominator + a.denominator * numerator;
		r.denominator = a.denominator * denominator;
		r.reduce();

		return r;
	}

	Rational Rational::sub(const Rational& a) {

		Rational r;

		r.numerator = a.numerator * denominator - a.denominator * numerator;
		r.denominator = a.denominator * denominator;
		reduce();

		return r;

	}

	Rational Rational::mul(const Rational& a) {

		Rational r;

		r.numerator = a.numerator * numerator;
		r.denominator = a.denominator * denominator;
		r.reduce();

		return r;
	}

	Rational Rational::div(const Rational& a) {

		Rational r;

		r.numerator = a.denominator * numerator;
		r.denominator = a.numerator * denominator;
		r.reduce();

		return r;
	}

	Rational Rational::getRational(Rational a)
	{
		Rational r(numerator, denominator);
		return r;
	}


	void Rational::toString() {
		if (denominator == 0)
			cout << "divison over 0" << endl;
		else {
			cout << numerator << "/" << denominator << endl;
		}
	}

	void Rational::toDecimal() {

		if (denominator == 0)
			cout << "Error" << endl;
		else
		{
			double num = numerator / denominator;
			cout << num << endl;
		}

	}

	void Rational::reduce() {
		int n = numerator < 0 ? -numerator : numerator;
		int d = denominator;
		int largest = n > d ? n : d;

		int gcd = 0;                                 // greatest common divisor

		for (int loop = largest; loop >= 2; loop--)
			if (numerator % loop == 0 && denominator % loop == 0) {
				gcd = loop;
				break;
			}

		if (gcd != 0) {
			numerator /= gcd;
			denominator /= gcd;
		}
	}
