#include <iostream>
#include <vector>
using namespace std;

/*
 * [1, 2, 3, 0, 12], 3 => true
[1, 2, 3, 0, 12], 1 => true
[1, 2, 3, 0, 12], 4 => false
 */

void unshift(vector<int>& arr, int element) {

	arr.insert(arr.begin(), element);
}

int main() {

	vector<int> arr({ 1, 2, 3, 0, 12 });

	unshift(arr, 41);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}