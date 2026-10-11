#include <iostream>

class Solution {
public:
	int hammingWeight(int n)
	{
		int k = 0;
		for (size_t i = 0; i < 32; ++i)
			if ((n >> i) & 1)
				k++;
		return k;
	}
};

int main(void)
{
	Solution *a = new Solution();
	int result = a->hammingWeight(128);	// 1
	std::cout << result << std::endl;
	result = a->hammingWeight(11);		// 3
	std::cout << result << std::endl;
	return 0;
}
