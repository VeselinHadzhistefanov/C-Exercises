#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * [1, 1, 2, 3], [1, 2, 2, 2, 3] => true
[1, 2, 3, 3, 3], [2, 2, 2, 4] => false
 */

bool isMatching(vector<int> a1, vector<int> a2) {

	for (int i = 0; i < a1.size(); i++) {
		int n = a1[i];

		bool matching = false;
		for (int j = 0; j < a2.size(); j++) {
			if (a2[j] == n) {
				matching = true;
			}
		}

		if (!matching) {
			return false;
		}
	}

	for (int i = 0; i < a2.size(); i++) {
		int n = a2[i];

		bool matching = false;
		for (int j = 0; j < a1.size(); j++) {
			if (a1[j] == n) {
				matching = true;
			}
		}

		if (!matching) {
			return false;
		}
	}

	return true;
}

int main() {

	cout << isMatching(vector<int>({ 1, 1, 2, 3 }), vector<int>({ 1, 2, 2, 2, 3 })) << endl;
	cout << isMatching(vector<int>({ 1, 2, 3, 3, 3 }), vector<int>({ 2, 2, 2, 4 })) << endl;
}