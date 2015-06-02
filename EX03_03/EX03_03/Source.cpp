#include <iostream>
#include "Even Number.h"
using namespace std;

int main()
{
	EvenNumber test(16);
	cout << "Number = " << test.getValue() << endl;
	cout << "getNext = " << test.getNext() << endl;
	cout << "getPrevious = " << test.getPrevious() << endl;
}