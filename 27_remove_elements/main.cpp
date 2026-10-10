#include <iostream>
#include <vector>

class Solution {
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		int k { 0 };
		for (size_t i = 0; i < nums.size(); ++i) {
			if (nums[i] != val) {
				nums[k] = nums[i];
				++k;
			}
		}

		for (size_t i = 0; i < nums.size(); ++i)
			std::cout << nums[i] << " ";
		std::cout << std::endl;

		return k;
	}
};

int main(void)
{
	std::vector<int> nums { 0, 1, 2, 2, 3, 0, 4, 2 };
	Solution *a = new Solution();
	a->removeElement(nums, 2);
	return 0;
}
