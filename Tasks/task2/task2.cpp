//Вариант 5 число неотрицательных четных элементов
#include <iostream>

using namespace std;

int main() {
	int n = 0, k = 0;
	while (n != -1) {
		cin >> n;
		if ((n >= 0) && (n % 2 == 0))
			k++;
	}cout << k;
}