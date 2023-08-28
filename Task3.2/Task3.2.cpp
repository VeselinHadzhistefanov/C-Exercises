#include <iostream>
#include <string>
using namespace std;

/*
"255.255.255.255" => 4228250625
"0.0.0.1" => 1
"0.0.1.1" => 257
 */

long long convertFromIP(string s) {

	long long IPNum = 0;

	for (int i = 0; i < 4; i++) {
		const int n = s.find_last_of('.');
		string element = s.substr(n + 1, s.size());

		if (element.size() > 3 || element.size() == 0) {
			throw(new exception("Invalid input!"));
		}

		int num = stoi(element);
		if (num > 255 || num < 0) {
			throw(new exception("Invalid input!"));
		}

		const long long exponent = pow(2, 8 * i);

		s = s.substr(0, n);
		IPNum += num * exponent;
	}

	return IPNum;
}

int main() {
	cout << convertFromIP("255.255.255.255") << endl;
	cout << convertFromIP("0.0.0.1") << endl;
	cout << convertFromIP("0.0.1.1") << endl;
}