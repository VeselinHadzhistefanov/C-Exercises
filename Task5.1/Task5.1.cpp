#include <iostream>
#include <vector>
using namespace std;

/*
 * [1, 0, 3, 0, 12], 0 => 3
[1, 0, 3, 0, 12], 0, 2 => 1
[1, 2, 3, 0, 12], 4 => -1
 */

int lastIndexOf(vector<int> arr, int searchElement, int fromIdx) {

	int idx = -1;
	for (int i = fromIdx; i < arr.size(); i++) {
		if (arr[i] == searchElement) {
			idx = i;
		}
	}

	return idx - fromIdx;
}

int lastIndexOf(vector<int> arr, int searchElement) {
	return lastIndexOf(arr, searchElement, 0);
}


int main() {
	cout << lastIndexOf(vector<int>{1, 0, 3, 0, 12}, 0) << endl;
	cout << lastIndexOf(vector<int>{1, 0, 3, 0, 12}, 0, 2) << endl;
	cout << lastIndexOf(vector<int>{1, 0, 3, 0, 12}, 4) << endl;
}
