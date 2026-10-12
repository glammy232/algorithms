# Theory, best practice, useful things in different topics

## Arrays

1. Two pointers

Use cases: finding a pair with a given sum, removing duplicates in place, reversing an array, and the Dutch National Flag problem.

int left = 0, right = nums.size() - 1;
while (left < right) {
    if (condition)
        left++;
    else
        right--;
}

2. Sliding Window

Use cases:

3. Prefix Sum

4. Kadane's Algorithm

5. Hash-tables(unordered_map/unordered_set)

Use cases: often need to make O(n^2) to O(n) and to check "Do we look it before?".
