#include "MyInteger.h"
#include <string>
using namespace std;

//First the get and in-class functions
int MyInteger::getInt(){ return value; }

bool MyInteger::isEven() const {
	if (value % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd() const {
	if (value % 2 == 1)
		return true;
	else
		return false;
}

bool MyInteger::isPrime() const {
	if (value > 0) {
		for (int i = 1; i < value; i++) {
			if (value % i == 0)
				return false;
			else if (i == 1)
				return false;
			else
				return true;
		}
	}
	else
		return false;
}

bool MyInteger::equals(int num) const {
	if (value == num)
		return true;
	else
		return false;
}

bool MyInteger::equals(const MyInteger& num) {
	if (value == num.value)
		return true;
	else
		return false;
}

//Then the static functions using any input variables
bool MyInteger::isEven(int num) {
	if (num % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(int num) {
	if (num % 2 == 1)
		return true;
	else
		return false;
}

bool MyInteger::isPrime(int num) {
	if (num > 0) {
		for (int i = 1; i < num; i++) {
			if (num % i == 0)
				return false;
			else if (i == 1)
				return false;
			else
				return true;
		}
	}
	else
		return false;
}

//Finally the static functions 
bool MyInteger::isEven(const MyInteger& num) {
	if (num.value % 2 == 0)
		return true;
	else
		return false;
}

bool MyInteger::isOdd(const MyInteger& num) {
	if (num.value % 2 == 1)
		return true;
	else 
		return false;
}

bool MyInteger::isPrime(const MyInteger& num) {
	if (num.value > 0) {
		for (int i = 1; i < num.value; i++) {
			if (num.value % i == 0)
				return false;
			else if (i == 1)
				return false;
			else
				return true;
		}
	}
	else
		return false;
}

int MyInteger::parseInt(const string& input) {
	return stoi(input);
}