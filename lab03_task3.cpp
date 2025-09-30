#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите целое n = "; int n; cin >> n;
	double summ = 0;
	for (int i = 0; i <= n; i++) {
		summ += (1.0 / (2 * n));
	}
	cout << "S = " << summ;
	return 0;
}