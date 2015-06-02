#include <cmath>
using namespace std;

class QuadraticEquation {
private:
	//Properties
	double a, b, c;
	

public:
	//Constructor
	QuadraticEquation(double first, double second, double third) {
		a = first;
		b = second;
		c = third;
	}

	//Get functions
	double getA() { return a; }
	double getB() { return b; }
	double getC() { return c; }

	//Behavior
	double getDiscriminant() {
		double disc = (b * b) - (4 * a * c);
		return disc;
	}

	double getRoot1(QuadraticEquation eq) {
		double r1;
		if (eq.getDiscriminant() > 0) {
			r1 = (b*(-1) + sqrt(eq.getDiscriminant())) / (2 * a);
		}
		else
			r1 = 0;

		return r1;
	}

	double getRoot2(QuadraticEquation eq) {
		double r2;
		if (eq.getDiscriminant() > 0) {
			r2 = (b*(-1) - sqrt(eq.getDiscriminant())) / (2 * a);
		}
		else
			r2 = 0;

		return r2;
	}
};