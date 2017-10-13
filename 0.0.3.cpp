#include <iostream>

using namespace std;

int main() {
	int a[10], b[10], c[20];
	bool q = true;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> b[i];
	}
  for (int i = 0; i < 9; i++) {
		if (a[i] => a[i + 1]) {
			q = false;
		}
  }
    for (int i = 0; i < 9; i++) {
		if (b[i] => b[i + 1]) {
			q = false;
		}
	}
	for (int i = 0, j = 0; i < 10, j < 20; i++, j+=2) {
		if (a[i] < b[i]) {
			c[j] = a[i];
			c[j + 1] = b[i];
		}
		else {
			c[j] = b[i];
			c[j + 1] = a[i];
		}
	}
	if (q = false) {
		cout << "The input sequence must be non-decreasing";
	}
	for (int i = 0; i < 20; i++) {
		cout << c[i] <<' ';
	}
	
	return 0;
}
