#include <iostream>
#include <string>
using namespace std;

//1, 3, 1, 2, 5, 2, 1, 3 = > 1, 1, 1, 2, 2, 3, 3, 5

int* sortNumbers(int* nums, int len) {

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {

			if (nums[j] < nums[j-1]) {
				int temp = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = temp;

			}
		}
	}

	return nums;
}


int main()
{

	int nums[8] = { 1, 3, 1, 2, 5, 2, 1, 3 };

	*nums = *sortNumbers(nums, 8);

	for (int n : nums) {
		cout << n << endl;
	}
}