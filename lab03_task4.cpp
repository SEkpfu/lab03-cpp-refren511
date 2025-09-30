#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите:" << endl; cout << "целое n = "; int n; cin >> n;
	cout << "вещественное x = "; double x; cin >> x;
	double result = cos(x);
	if (n <= 0) {
		cout << "Ошибка: введено некорректное число n";
		return 1;
	}
	else {
		for (int i = 1; i < n; i++) {
			result = cos(x + result);
		}
		cout << "Ответ = " << result;
	}
	return 0;
}