#include <iostream>
#include "Rational.h"
using namespace std;

int main() {

	Rational a;
	Rational b(3, 1), c(50, 2);
	Rational e(360, 12);
	Rational f(10, 10);

	a = b.sub(c);
	a.toString();

	c.mul(b);
	c.toString();

	c.div(b);
	c.toString();

	system("pause");

	f.toDecimal();

	f.add(f);
	f.toDecimal();
	f.toString();

	return 0;
}