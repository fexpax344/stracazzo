#pragma once
#include <iostream>
using namespace std;

class gradi {
public:
	float Rs, Rp, fg, fs, fp;

	void Secondi(float s, float S) {
		fs = s + S;
		if (fs >= 60) {
			fs = fs - 60;
			Rs = 1;
		}else{
			Rs = 0;
		}
	}
	void Primi(float p, float P) {
		fp = p + P;
		if (fp >= 59) {
			fp = fp - 60;
			Rp = 1;
		}else{
			Rp = 0;
		}
		if (Rs == 1) {
			fp + 1;
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


