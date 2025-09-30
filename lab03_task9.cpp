#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a = 1;
	int max_num = 0;
	int cnt_max = 0;
	cout << "Ввод последовательности натуральных чисел:" << endl;
	while (a != 0) {
		cin >> a;
		if (a > max_num) {
			max_num = a;
			cnt_max = 0;
		}
		else if (a == max_num) {
			cnt_max++;
		}
	}
	cout << "Кол-во элементов последоватнельности, которые равны её наибольшему элементу = " << cnt_max;
	return 0;
}