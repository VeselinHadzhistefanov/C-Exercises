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

		if (biggest.size() == 0) {
			biggest.push_back(element);
			continue;
		}

		int pos = 0;
		for (int j = 0; j < biggest.size(); j++) {

			if (element < biggest[j]) {
				pos = j + 1;
			}
		}

		if (pos == n) {
			continue;
		}

		if (pos == biggest.size()) {
			biggest.push_back(element);
		}
		else {
			biggest.insert(biggest.begin() + pos, element);
		}

		if (biggest.size() > n) {
			biggest.pop_back();
		}
	}

	return biggest;
}



int main() {
	vector<int> elements = { 1, 8, 0, 6, 3, 9, 10, 15, 12 };

	elements = getKBiggest(elements, 7);

	for (int i = 0; i < elements.size(); i++) {
		cout << elements[i] << " ";
	}
}