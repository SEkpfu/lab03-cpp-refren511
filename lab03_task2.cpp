#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int cnt_otr = 0; int sum_dvuhzn = 0; int min_all = 10e100;
	cout << "Введите 7 целых чисел: " << endl;

	for (int cnt = 0; cnt != 7; cnt ++) {
		int a;
		cout << cnt + 1 << " число = "; cin >> a;
		if (a < 0) {
			cnt_otr++;
		}
		if (abs(a) >= 10 && abs(a) < 100 ) {
			sum_dvuhzn += a;
		}
		if (a < min_all) {
			min_all = a;
		}
	}
	cout << "Количество отрицательных чисел = " << cnt_otr << endl;
	cout << "Cумму двузначных чисел = " << sum_dvuhzn << endl;
	cout << "Наименьшее из всех введенных чисел = " << min_all << endl;
	return 0;
}