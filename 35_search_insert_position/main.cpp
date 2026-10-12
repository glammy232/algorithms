#include <iostream>
#include <vector>

class Solution {
public:
	int searchInsert(std::vector<int>& nums, int target)
	{
		int left = 0;
		int right = nums.size() - 1;

		while (left <= right) {
			int mid = left + (right - left) / 2;

			if (nums[mid] == target) {
				return mid;
			} else if (nums[mid] < target) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		return left;
	}
};

int main(void)
{
	std::vector<int> n = { 1, 3, 5, 6 };
	int target = 7; //Also can try with 2 and 5

	Solution s;
	int insertion_index = s.searchInsert(n, target);

	std::cout << insertion_index << " INSERTION INDEX" << std::endl;

	return 0;
}

