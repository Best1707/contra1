//Вариант 3 ax > b
#include <iostream>

using namespace std;

int main() {
	float a, b, x, k;
	cin >> a >> b;
	if (a > 0) {
		x = b / a;
		cout << "X > " << x;
	}if (a < 0) {
		x = b / a;
		cout << "X <= " << x;
	}if (a == 0) {
		cout << "NO SOLUTION";
	}
}