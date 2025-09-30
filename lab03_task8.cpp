#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите размер доски (n x n, где n -- чётное) n = "; int n; cin >> n;
	if (n % 2 != 0) {
		cout << "Вы ввели нечётное число";
		return 1;
	}
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if ((row + col) % 2 == 0) {
				cout << "o ";
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
	return 0;
}