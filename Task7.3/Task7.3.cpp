#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool compareStrings(string s1, string s2) {

	string a1(s1);
	string a2(s2);

	int numSpaces = 0;
	for (int i = 0; i < a1.size(); i++) {
		if (a1[i] == ' ') {
			numSpaces++;
			if (numSpaces > 1) {
				a1.erase(a1.begin() + i);
				i--;
			}
		}
		else {
			numSpaces = 0;
		}
	}

	numSpaces = 0;
	for (int i = 0; i < a2.size(); i++) {
		if (a2[i] == ' ') {
			numSpaces++;
			if (numSpaces > 1) {
				a2.erase(a2.begin() + i);
				i--;
			}
		}
		else {
			numSpaces = 0;
		}
	}

	if (a1.size() != a2.size())
	{
		return false;
	}

	for (int i = 0; i < a1.size(); i++) {
		char c1 = a1[i];
		char c2 = a2[i];

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
