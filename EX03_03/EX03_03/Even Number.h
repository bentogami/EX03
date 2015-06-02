using namespace std;

class EvenNumber {
private:
	//Property
	int value;

public:
	//Constructors
	EvenNumber() {
		value = 0;
	}
	EvenNumber(int v) {
		value = v;
	}

	int getValue() { return value; }
	
	//Behaviors
	int getNext() {
		return value + 2;
	}
	int getPrevious() {
		return value - 2;
	}
};