#include <iostream>
using namespace std;

double to_tf(int tc) {
	return ((9.0 / 5.0) * tc + 32);
}

int main() {
	int tc = 0;
	while (tc <= 100) {
		double tf = to_tf(tc);
		cout << "tC = " << tc << " -- tF = " << tf << endl;
		tc += 10;
	}
	return 0;
}