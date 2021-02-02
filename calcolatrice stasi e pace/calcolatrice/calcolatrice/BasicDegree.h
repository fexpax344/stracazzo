#pragma once
#include <iostream>

class BasicDegree {
public:

	// Constructor
	BasicDegree(int degrees, int first, int seconds);

	void print();

	BasicDegree& operator+ (BasicDegree& right);

private:
	int degrees;
	int first;
	int seconds;
};


