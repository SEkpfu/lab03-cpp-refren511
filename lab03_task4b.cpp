#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите:" << endl; cout << "целое n = "; int n; cin >> n;
	cout << "вещественное x = "; double x; cin >> x;
	double res = sqrt(x);
	if (n <= 0) {
		cout << "Ошибка: введено некорретное значение n";
	}
	else{
		if (x < 0) {
		cout << "Ошибка -nanind: x < 0";
		}
		else {
			for (int i = 1; i < n; i++) {
				res = sqrt(x + res);
			}
			cout << "Ответ = " << res;
		}
	}
	return 0;
}