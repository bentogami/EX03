//Chase Lake
//EX03_01: The Fan Class

class Fan {
private:
	//Properties
	int speed;
	bool on;
	double radius;

public:
	//Empty constructor
	Fan() {
		speed = 1;
		on = false;
		radius = 5;
	}

	//Set properties
	void SetSpeed(int s);
	void TurnOn();
	void TurnOff();
	void SetRadius(double r);

	//Get properties
	int GetSpeed();
	bool IsOn();
	double GetRadius();
};