#include <iostream>
#include <vector>
using namespace std;

vector<int> getCurrentSum(vector<int>& arr) {

	vector<int> currentSum(arr.size());

	int sum = 0;
	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		currentSum[i] = sum;
	}

	return currentSum;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5 };

	arr = getCurrentSum(arr);

	for (int i : arr) {
		cout << i << " ";
	}
}