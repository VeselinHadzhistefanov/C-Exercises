#include <iostream>
#include <string>
using namespace std;

string getDuplicates(string a, string b) {
	string chars = "";

	for (char c1 : a) {
		if (b.find(c1) < b.length()) {
			if (chars.find(c1) >= chars.length()) {
				chars.append(string(1, c1));
			}
		}
	}

	return chars;
}

int main() {
	cout << getDuplicates("abc", "def");
	cout << getDuplicates("abc", "cde");
	cout << getDuplicates("abc", "dafc");
	cout << getDuplicates("abca", "deaf");
}