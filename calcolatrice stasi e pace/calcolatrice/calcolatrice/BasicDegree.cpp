#include "BasicDegree.h"

BasicDegree::BasicDegree(int degrees, int first, int seconds)
	: degrees(degrees), first(first), seconds(seconds)
{}

void BasicDegree::print()
{
	std::cout << degrees << "° " << first << "' " << seconds << "\"" << std::endl;
}

BasicDegree& BasicDegree::operator+(BasicDegree & right)
{
	int rest = 0;

	seconds += right.seconds;
	if (seconds >= 60) {
		seconds -= 60;
		rest = 1;
	}
	else {
		rest = 0;
	}
	
	first = first + right.first + rest;
	if (first >= 60) {
		first -= 60;
		rest = 1;
	}
	else {
		rest = 0;
	}

	degrees = degrees + right.degrees + rest;

	return *this;
}
