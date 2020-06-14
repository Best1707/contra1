//Вариант 7 количество отрезков невозрастания
#include <iostream>

using namespace std;

int main() {
	int n, k = 0, * A, t = 0;
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}for (int i = 1; i < n; i++) {
		if ((A[i] <= A[i - 1]) && (t == 1)) {
			t = 1;
		}
		else if (A[i] <= A[i - 1]) {
			k++;
			t = 1;
		}
		else {
			t = 0;
		}
	}cout << k;
}