#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * [1, 2, 3, 3, 3], 2 => [3, 3, 3]
[1, 2, 3, 4, 3], 2, 3 => [3, 4]
 */

vector<int> subarray(vector<int> arr, int start, int end) {

	if (start < 0 || start >= arr.size() || end < 0 || end > arr.size() || start > end) {
		throw exception("Invalid data.");

	}

	vector<int> subArr;

	for (int i = start; i < end; i++) {
		subArr.push_back(arr[i]);
	}

	return subArr;
}

vector<int> subarray(vector<int> arr, int start) {
	return subarray(arr, start, arr.size());
}


int main() {

	vector<int> arr({ 1, 2, 3, 3, 3 });

	arr = subarray(arr, 2);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	arr = vector<int>({ 1, 2, 3, 3, 3 });
	arr = subarray(arr, 2, 3);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}