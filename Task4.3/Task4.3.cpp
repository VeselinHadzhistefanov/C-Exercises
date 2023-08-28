#include <iostream>
#include <vector>
using namespace std;

/*
 * [1, 2, 3, 0, 12], 3 => true
[1, 2, 3, 0, 12], 1 => true
[1, 2, 3, 0, 12], 4 => false
 */

void shift(vector<int>& arr, int searchElement, int fromIndex) {

	for (int i = fromIndex; i < arr.size(); i++) {
		if (arr[i] == searchElement) {
			arr.erase(arr.begin() + i);
		}
	}
}

int main() {

	vector<int> arr({ 1, 2, 3, 0, 12 });

	shift(arr, 1, 0);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}