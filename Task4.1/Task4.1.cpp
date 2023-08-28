#include <iostream>
#include <vector>
using namespace std;
/*
 * [1, 2, 3, 0, 12], 3 => 2
[1, 2, 3, 0, 12], 1 => 0
[1, 2, 3, 0, 12], 4 => -1
 */

int indexOf(vector<int> arr, int searchElement, int fromIndex) {

	for (int i = fromIndex; i < arr.size(); i++) {
		if (arr[i] == searchElement) {
			return i;
		}
	}

	return -1;
}


int main() {
	cout << indexOf(vector<int>{1, 2, 3, 0, 12}, 3, 0) << endl;
	cout << indexOf(vector<int>{1, 2, 3, 0, 12}, 1, 0) << endl;
	cout << indexOf(vector<int>{1, 2, 3, 0, 12}, 4, 0) << endl;
}