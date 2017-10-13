#include <iostream>

using namespace std;

int main() {
	int a[10], b;
	bool q = false;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	cin >> b;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if ((a[i] + a[j+1]) == b) {
				cout << a[i] <<' '<< a[j+1];
				q = true;
			}
		}
		break;
	}
	if (q == false)
		cout << "There is not such pair of numbers";

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.get();

	return 0;
}
