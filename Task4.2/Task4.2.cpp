#include <iostream>
#include <vector>
using namespace std;

/*
 * [1, 2, 3, 0, 12], 3 => true
[1, 2, 3, 0, 12], 1 => true
[1, 2, 3, 0, 12], 4 => false
 */

bool includes(vector<int> arr, int searchElement, int fromIndex) {

	for (int i = fromIndex; i < arr.size(); i++) {
		if (arr[i] == searchElement) {
			return true;
		}
	}

	return false;
}

int main() {
	cout << includes(vector<int>{1, 2, 3, 0, 12}, 3, 0) << endl;
	cout << includes(vector<int>{1, 2, 3, 0, 12}, 1, 0) << endl;
	cout << includes(vector<int>{1, 2, 3, 0, 12}, 4, 0) << endl;
}