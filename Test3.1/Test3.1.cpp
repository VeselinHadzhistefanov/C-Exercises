#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * "abc", "cba" => true
"abc", "ab" => false
"ababc", "abcccc" => true
 */

bool compareStrings(string s1, string s2) {

	int chars1[28];
	int chars2[28];

	for (int i = 0; i < s1.size(); i++) {
		char c = tolower(s1[i]);
		int n = c - tolower('a');
		chars1[n] = 1;
	}

	for (int i = 0; i < s2.size(); i++) {
		char c = tolower(s2[i]);
		int n = c - tolower('a');
		chars2[n] = 1;
	}

	for (int i = 0; i < 28; i++) {
		if (chars1[i] != chars2[i]) {
			return false;
		}
	}

	return true;
}

int main() {

	cout << compareStrings("abc", "cba") << endl;
	cout << compareStrings("abc", "ab") << endl;
	cout << compareStrings("ababc", "abcccc") << endl;
}
