#include "BasicDegree.h"

BasicDegree::BasicDegree(int degrees, int first, int seconds)
	: degrees(degrees), first(first), seconds(seconds)
{}

void BasicDegree::print()
{
	std::cout << "" << std::endl;
	std::cout << degrees << "° " << first << "' " << seconds << "\"" << std::endl;
}

BasicDegree& BasicDegree::operator+(BasicDegree & right)
{
	int rest = 0;
	//somma secondi
	seconds += right.seconds;
	if (seconds >= 60) {
		seconds -= 60;
		rest = 1;
	}
	else {
		rest = 0;
	}
	//somma primi
	first = first + right.first + rest;
	if (first >= 60) {
		first -= 60;
		rest = 1;
	}
	else {
		rest = 0;
	}
	//somma gradi
	degrees = degrees + right.degrees + rest;

	return *this;
}

BasicDegree& BasicDegree::operator-(BasicDegree& right)
{
	//sottrazione gradi
	if (right.degrees > degrees) {
		std::cout << "sottrazione impossibile" << std::endl; 
		return *this;
	}else{
		degrees = degrees - right.degrees;
		//sottarazione primi
		if (right.first > first) {
			degrees -= 1;
			first = first + 60 - right.first;
		}
		else {
			first = first - right.first;
		}
		//sottrazione secondi
		if (right.seconds > seconds) {
			first -= 1;
			seconds = seconds + 60 - right.seconds;
		}
		else {
			seconds = seconds - right.seconds;
		}
	}
	return *this;
}
