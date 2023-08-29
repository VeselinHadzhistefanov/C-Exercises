#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * "abc#" => "ab"
"a#bc" => "bc"
"abc##" => "a"
"a##bc" => "bc"
 */


string removeChars(string s) {

	int n = 0;
	string s1;

	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == '#') {
			n++;
			continue;
		}

		if (n > 0) {
			i -= n;
			n = 0;
		}

		if (i >= 0) {
			s1.insert(s1.begin(), s[i]);
		}

	}

	return s1;
}

int main() {

	cout << removeChars("abc#") << endl;
	cout << removeChars("a#bc") << endl;
	cout << removeChars("abc##") << endl;
	cout << removeChars("a##bc") << endl;

}
