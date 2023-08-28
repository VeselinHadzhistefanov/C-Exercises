#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<int> reverseArray(vector<int>& arr) {

	for (int i = 0; i < arr.size() / 2 + 1; i++) {
		const int temp = arr[i];
		arr[i] = arr[arr.size() - i - 1];
		arr[arr.size() - i - 1] = temp;
	}

	return arr;
}

int main() {
	vector<int> arr(10);

	iota(arr.begin(), arr.end(), 0);

	arr = reverseArray(arr);

	for (const int i : arr) {
		cout << i << " ";
	}
}