#pragma once
#include <iostream>
using namespace std;

class gradi {
public:
	float r1, r2, fg, fs, fp;
	void Primi(float p, float P) {
		fp = p + P;
		if (fp >= 60) {
			r1 = fp - 60;
			fp == r1;
			fs = fs + 1;
		}
	}
	void Secondi(float s, float S) {
		fs = s + S;
		if (fs <= 60) {
			r2 = fs - 60;
			fs == r2;
			fg = fg + 1;
		}
	}
	void Gradi(float g, float G) {
		fg = g + G;
	}
	void print()
	{
	cout << "La media e' " << fg << endl;
	cout << "La media e' " << fp << endl;
	cout << "La media e' " << fs << endl;
	}

};


