#include <iostream>

using namespace std;

int const A_SIZE = 10;
int const k = 3;

int main() {
	double a[A_SIZE];

	for (int i = 0; i < A_SIZE; i++) {
		a[i] = rand();
	}

	for (int i = 0; i < A_SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	double temp;
	for (int j = 0; j < k; j++) {
		for (int i = 0; i < A_SIZE - 1; i++) {
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	
	for (int i = 0; i < A_SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int j = 0; j < k; j++) {
		for (int i = A_SIZE - 1; i > 0; i--) {
			temp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = temp;
		}
	}

	for (int i = 0; i < A_SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
