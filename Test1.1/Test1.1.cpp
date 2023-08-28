#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * [1, 8, 0, 6, 3, 9, 10, 15, 12], 3 => [8, 6, 3]
 */


vector<int> getKBiggest(vector<int>& elements, int n) {

	vector<int> biggest;

	for (int i = 0; i < elements.size(); i++) {
		int element = elements[i];

		int pos = 0;
		for (int j = 0; j < biggest.size(); j++) {

			if (element < biggest[j]) {
				pos = j;
			}
		}

		if (pos == n - 1) {
			continue;
		}

		biggest.insert(biggest.begin() + pos, element);
		if (biggest.size() > n) {
			biggest.pop_back();
		}
	}

	return biggest;
}



int main() {
	vector<int> elements = { 1, 8, 0, 6, 3, 9, 10, 15, 12 };

	elements = getKBiggest(elements, 3);

	for (int i : elements) {
		cout << i << " ";
	}
}