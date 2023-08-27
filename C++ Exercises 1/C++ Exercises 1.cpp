#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
5 => 5
10 => a
16 => 10
255 => ff
 */

string convert16System(int num) {

	vector<int> elements;

	int i = 0;
	while (num > 0 && i < 16) {
		long long exponent = pow(16, i + 1);
		int element = num % exponent;

		elements.push_back(element);
		num = (num - element) / 16;

		i++;
	}

	char chars[] = { 0, 1, 2, 3,4, 5,6,7,8,9,'a', 'b', 'c', 'd', 'e', 'f' };

	string s;

	for (int i = 0; i < elements.size(); i++) {
		int n = elements[elements.size() - 1 - i];
		char c = chars[n];

		s.push_back(c);
	}

	return s;
}

int main() {
	cout << convert16System(5) << endl;
	cout << convert16System(10) << endl;
	cout << convert16System(16) << endl;
	cout << convert16System(255) << endl;
}