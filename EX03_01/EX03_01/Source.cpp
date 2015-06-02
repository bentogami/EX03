#include <iostream>
#include "Fan.h"
using namespace std;

int main() 
{
	Fan f1, f2;

	f1.SetSpeed(3);
	f1.SetRadius(10);
	f1.TurnOn();

	f2.SetSpeed(2);
	
	cout << "Fan 1\nSpeed = " << f1.GetSpeed() << "\nRadius = " << f1.GetRadius() << "\nOn = " << boolalpha << f1.IsOn() << endl;

	cout << '\n';

	cout << "Fan 2\nSpeed = " << f2.GetSpeed() << "\nRadius = " << f2.GetRadius() << "\nOn = " << boolalpha << f2.IsOn() << endl;
}