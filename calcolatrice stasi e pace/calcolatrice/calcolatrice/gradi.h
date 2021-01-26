#pragma once
#include <iostream>
using namespace std;

class gradi {
public:
	int Rs = 0, Rp = 0, fg = 0, fs = 0, fp = 0;

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
	void print()
	{
	cout << " " << endl;
    cout << "il risultato e': " << endl;
	cout << "gradi: " << fg << endl;
	cout << "primi: " << fp << endl;
	cout << "secondi: " << fs << endl;
	}

};


