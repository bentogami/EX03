#include "Fan.h"
using namespace std;

//Set properties
void Fan::SetSpeed(int s) {
	if (s > 0 && s < 4) {
		speed = s;
	}
}

void Fan::TurnOn() { on = true; }

void Fan::TurnOff() { on = false; }

void Fan::SetRadius(double r) {
	if (r > 0) {
		radius = r;
	}
}

//Get Properties
int Fan::GetSpeed(){ return speed; }

bool Fan::IsOn() { return on; }

double Fan::GetRadius() { return radius; }