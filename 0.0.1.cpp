#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	if (str.length() <= 80) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				cout << '%'<<'2'<<'0';
			}
			else {
				cout << str[i];
			}
		}
	}
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin.get();
	return 0;
}
