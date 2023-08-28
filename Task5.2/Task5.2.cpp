#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * "ala bala", "la" => 1
"github", "hub" => 3
"microsoft", "google" => -1
 */

int indexOf(string s, string element) {

	for (int i = 0; i < s.size() - element.size() + 1; i++) {

		bool isMatch = true;

		for (int j = 0; j < element.size(); j++) {
			if (s[i + j] != element[j]) {
				isMatch = false;
			}
		}

		if (isMatch) {
			return i;
		}
	}

	return -1;
}

int main() {

	cout << indexOf("ala bala", "la") << endl;
	cout << indexOf("github", "hub") << endl;
	cout << indexOf("microsoft", "google") << endl;
}
