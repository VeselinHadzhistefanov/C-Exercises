#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * [1, 3, 8, 1, 16, 3, 4] => [1, 3, 8, 16, 4]
 */


vector<int> removeDuplicates(vector<int>& arr) {

	vector<int> result_arr(arr);

	for (int i = 0; i < result_arr.size(); i++) {
		int n = result_arr[i];

		for (int j = i + 1; j < result_arr.size(); j++) {
			if (result_arr[j] == n) {
				result_arr.erase(result_arr.begin() + j);
			}
		}

	}

	return result_arr;
}

int main() {
	vector<int> arr = { 1, 3, 8, 1, 16, 3, 4, 1, 3, 8, 1, 16, 3, 4 };

	arr = removeDuplicates(arr);

	for (int i : arr) {
		cout << i << " ";
	}

}
