#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int>& nums, int low, int high, int x) {
	cout << low << ":" << nums[low];
	cout << "|" << high << ":" << nums[high];
	cout << "||" << x << ":";
	cout << low << ":" << nums[low];
	cout << "|" << high << ":" << nums[high];
	cout << "||" << x << endl;

	int mid = (low + high)/2;

	if (low == high) {
		if (x > nums[low]) {
			x = nums[low];
		}
		return x;
	}

	if (nums[mid] > low) {
		if (x>nums[low]) {
			x = nums[low];
		}
		return bin_search(nums, mid+1, high, x);
	}
	else {
		if (x > nums[mid]) {
			x = nums[mid];
		}
		return bin_search(nums, low, mid-1, x);
	}
}

int findMin(vector<int>& nums) {
	int s = nums.size();
	return bin_search(nums, 0, s-1, 5001);
}

int main() {
	vector<int> nums;
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(0);
	nums.push_back(1);
	return findMin(nums);
}