#include "BasicDegree.h"

BasicDegree::BasicDegree(int degrees, int first, int seconds)
	: degrees(degrees), first(first), seconds(seconds)
{}

BasicDegree& BasicDegree::operator+(BasicDegree & right)
{
	void Secondi(float s, float S) {
		fs = s + S;
		if (fs >= 60) {
			fs -= 60;
			Rs = 1;
		}
		else {
			Rs = 0;
		}
	}
	void Primi(float p, float P) {
		fp = p + P + Rs;
		if (fp >= 60) {
			fp -= 60;
			Rp = 1;
		}
		else {
			Rp = 0;
		}
	}
	void Gradi(float g, float G) {
		fg = g + G + Rp;
	}
	return right;
}
