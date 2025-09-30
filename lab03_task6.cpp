#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(0, "");
	int cnt = 0; int cntchet = 0;
	do {
		int a; cout << "Введите целое число = "; cin >> a;
		cnt++;
		if (a % 2 == 0) {
			cntchet++;
		}
		int dgt; cout << "Хотите ввести ещё число ? (Да = 1 / Нет = 0)  -- "; cin >> dgt;
		if (dgt == 0) {
			break;
		}
	} while (true);
	cout << "Общее количество чисел: " << cnt << endl;
	cout << "Количество четных чисел: " << cntchet << endl;
	return 0;
}