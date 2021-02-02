#include "BasicDegree.h"

BasicDegree::BasicDegree(int degrees, int first, int seconds)
	: degrees(degrees), first(first), seconds(seconds)
{}

BasicDegree& BasicDegree::operator+(BasicDegree & right)
{
	return right;
}
