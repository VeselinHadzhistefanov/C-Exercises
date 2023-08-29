#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * "abc" => false
"1212" => true
"alaala" => true
"alaal" => false
"zzzzz" => true
"acacac" => true
"acaca" => false
 */

bool checkRepeating(string s) {

	for (int i = 0; i < s.size() / 2; i++) {
		if (s.size() % (i + 1) != 0) {
			continue;
		}

		bool repeating = true;
		for (int j = 0; j < (i + 1); j++) {
			char c = s[j];

			for (int n = 1; n < s.size() / (i + 1); n++) {
				if (s[j + n * (i + 1)] != c) {
					repeating = false;
				}
			}

		}

		if (repeating) {
			return true;
		}
	}

	return false;
}

int main() {

	cout << checkRepeating("abc") << endl;
	cout << checkRepeating("1212") << endl;
	cout << checkRepeating("alaala") << endl;
	cout << checkRepeating("alaal") << endl;
	cout << checkRepeating("zzzzz") << endl;
	cout << checkRepeating("acacac") << endl;
	cout << checkRepeating("acaca") << endl;
}
