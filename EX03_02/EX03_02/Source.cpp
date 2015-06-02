#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
	double a, b, c;
	cout << "Please enter three numbers.\nFirst number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	cout << "Third number: ";
	cin >> c;

	cout << "Equation: (" << a << ")x^2 + (" << b << ")x + (" << c << ")\n";

	QuadraticEquation eq(a, b, c);
	if (eq.getDiscriminant() > 0) {
		cout << "Root 1 = " << eq.getRoot1(eq) << endl;
		cout << "Root 2 = " << eq.getRoot2(eq) << endl;
	}
	else if (eq.getDiscriminant() == 0) {
		cout << "The one root is " << eq.getRoot1(eq) << endl;
	}
	else
		cout << "The equation has no real roots.\n";

}