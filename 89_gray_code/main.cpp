#include <iostream>
#include <vector>

/*class Solution {
public:
	bool is_one_diff(int a, int b)
	{
		bool res = true;
		int count_of_difference_bits = 0;

		for (size_t i = 0; i < 32; ++i) {
			bool a_bit = (a >> i) & 1;
			bool b_bit = (b >> i) & 1;

			if (a_bit != b_bit)
				count_of_difference_bits++;
		}

		if (count_of_difference_bits != 1)
			res = false;

		return res;
	}

	bool contains_in_array(const std::vector<int>& arr, int n)
	{
		bool contains = false;

		for (int i = 0; i < arr.size(); ++i)
			if (n == arr[i])
				contains = true;
		return contains;
	}

	std::vector<int> grayCode(int n)
	{
		int k = 2;
		for (size_t i = 0; i < (n - 1); ++i)
			k *= 2;
		std::vector<int> arr ( k, 0 );
		std::cout << arr.size() << std::endl;
		std::cout << arr.capacity() << std::endl;

		int last_pick = 0;
		for (size_t i = 1; i < k; ++i) {
			for (size_t j = 1; j < k; ++j) {
				if (contains_in_array(arr, j))
					continue;
				if (is_one_diff(last_pick, j)) {
					arr[i] = j;
					last_pick = j;
					break;
				}
			}
		}
		
		return arr;
	}
}; First Brute Force trying*/

class Solution {
public:
	// The best solution
    std::vector<int> grayCode(int n) {
        int k = 1 << n;	// 2^n
        std::vector<int> res(k);
        for (int i = 0; i < k; ++i) {
            // G(i) = i XOR (i >> 1). Gray`s algorithm
            res[i] = i ^ (i >> 1);
        }
        return res;
    }
};

int main() {
    Solution a;
    std::vector<int> code = a.grayCode(4);

    std::cout << "Gray code (n=4):\n";
    for (int v : code)
        std::cout << v << '\n';

    std::cout << "ARRAY SIZE: " << code.size() << '\n';
    return 0;
}

