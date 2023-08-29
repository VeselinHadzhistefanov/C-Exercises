#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool compareStrings(string s1, string s2) {

	int n1 = 0;
	int n2 = 0;

	while (s1[n1] == ' ') {
		n1++;
	}
	while (s2[n2] == ' ') {
		n2++;
	}

	int a1 = s1.size() - 1;
	int a2 = s2.size() - 1;

	while (s1[a1] == ' ') {
		a1--;
	}

	while (s2[a2] == ' ') {
		a2--;
	}

	if (a1 - n1 != a2 - n2) {
		return false;
	}

	a1++;
	a2++;

	for (int i = 0; i < a1 - n1; i++) {
		char c1 = s1[n1 + i];
		char c2 = s2[n2 + i];

		if (std::tolower(c1) != std::tolower(c2)) {
			return false;
		}

	}

	return true;
}

int main() {

	cout << compareStrings("  abc  ", "abc") << endl;
	cout << compareStrings("ABC", "abc") << endl;
	cout << compareStrings(" ala   bala", "ala bala") << endl;
	cout << compareStrings(" ala bala  ", "alabala") << endl;
}
