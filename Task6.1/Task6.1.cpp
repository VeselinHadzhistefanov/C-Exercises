#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * [1, 2, 3, 3, 4, 4, 5] -> [1, 2, 3, 4, 5]
 */

vector<int> removeDuplicates(vector<int> arr) {

	if (arr.size() == 0)
		return arr;

	vector<int> newArr;
	int i = 1;
	int num = arr[0];
	newArr.push_back(num);

	while (i < arr.size()) {
		if (arr[i] != num) {
			num = arr[i];
			newArr.push_back(num);
		}
		i++;
	}

	return newArr;
}

int main() {

	vector<int> arr({ 1, 2, 3, 3, 4, 4, 5 });

	arr = removeDuplicates(arr);

	for (int i : arr) {
		cout << i << " ";
	}
}
