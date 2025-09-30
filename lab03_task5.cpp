#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(0, "");
	double eps; cout << "Введите малое положительное число = "; cin >> eps;
	int k = 0; int ind = 0;
	double sum = 0.0; double drob;
	do {
		drob = 1.0 / (2 * k + 1);
		if (drob < eps) {
			break;
		}
		else {
			if (ind % 2 == 0) {
				sum += drob;
			}
			else {
				sum -= drob;
			}
		}
		ind++;
		k++;
	} while (true);
	cout << fixed << setprecision(10) ;
	cout << sum;
	return 0;
}