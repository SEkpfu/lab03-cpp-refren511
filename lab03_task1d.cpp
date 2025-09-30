#include <iostream>
#include <cmath>

double fun(double x) {
	if (x > 1) {
		return (1 + sqrt(abs(cos(x))));
	}
	else if (x < -0.5) {
		return (1 - pow(x, 2));
	}
	else {
		return (x + 1);
	}
}

using namespace std;
int main() {
	for (double x = -1.5; x < 1.75; x += 0.25) {
		double y = fun(x);
		cout << "x = " << x << " -- y = " << y << endl;
	}
	return 0;
}