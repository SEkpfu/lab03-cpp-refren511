#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	for (double x= 0; x < ((M_PI * 2) + (M_PI / 6.0)); x += (M_PI / 6.0)) {
		double y = cos(x);
		cout << fixed;
		cout << "x = " << x << " -- y = " << y << endl;
	}
	return 0;
}