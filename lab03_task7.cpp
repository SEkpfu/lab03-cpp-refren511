#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x_last, y_last;
	double x_llast, y_llast;
	double perimetr = 0;
	cout << "Введите число вершин n = "; int n; cin >> n;
	if (n < 3) {
		cout << "Многоугольник должен иметь хотя бы 3 вершины";
		return 1;
	}
	cout << "Введите координаты (x, y):" << endl;
	cout << "Вершины 1 -- "; cin >> x_last >> y_last;
	x_llast = x_last;
	y_llast = y_last;
	for (int i = 2; i <= n; i++) {
		double x, y;
		double x_llast, y_llast;
		cout << "Вершины " << i << " -- "; cin >> x >> y;
		double stor = sqrt(pow(x - x_last, 2) + pow(y - y_last, 2));
		perimetr += stor;
		x_last = x;
		y_last = y;
	}
	perimetr += sqrt(pow(x_last - x_llast, 2) + pow(y_last - y_llast, 2));
	cout << "Периметр " << n << "-угольника = " << perimetr;
	return 0;
}