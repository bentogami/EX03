#include <string>
using namespace std;

#ifndef MYINT_H_
#define MYINT_H_

class MyInteger {
private:
	int value;

public:
	MyInteger(int v) {
		value = v;
	}

	//Lots of prototyping.
	//First the get and in-class functions
	int getInt();
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	bool equals(int num) const;
	//This next function is by nature a const function since it uses only a const variable, right?
	bool equals(const MyInteger& num);

	//Then the static functions using any input variables
	static bool isEven(int num);
	static bool isOdd(int num);
	static bool isPrime(int num);

	//Finally the static functions 
	static bool isEven(const MyInteger& num);
	static bool isOdd(const MyInteger& num);
	static bool isPrime(const MyInteger& num);
	static int parseInt(const string& input);
};

#endif