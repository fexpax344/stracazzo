#pragma once
#include <iostream>
using namespace std;

class gradi {
public:
	float r1, r2, fg, fs, fp, x1, x2;

	void Secondi(float s, float S) {
		fs = s + S;
		if (fs >= 60) {
			fs = fs - 60;
			x1 == 1;
		}else{
			x1 = 0;
		}
	}
	void Primi(float p, float P) {
		fp = p + P + x1;
		if (fp >= 60) {
			fp = fp - 60;
			x2 = 1;
		}else{
			x2 = 0;
		}
	}
	void Gradi(float g, float G) {
		fg = g + G + x2;
	}
	void print()
	{
	cout << " " << endl;
    cout << "il risultato è: " << endl;
	cout << "gradi: " << fg << endl;
	cout << "primi: " << fp << endl;
	cout << "secondi: " << fs << endl;
	}

};


