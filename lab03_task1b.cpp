#include <iostream>
#include <cmath>
using namespace std;

double vr(double x) {
	return log(x + 1) * sin(x);
}

int main() {
	double x = 0;
	do {
		double y = vr(x);
		x += 0.5;
		cout << "x = " << x << " -- y = " << y << endl;

	} while (x <= 4.5);
	return 0;
}