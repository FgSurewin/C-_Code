#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> twoSum(const std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> complementMap; // To store the complement and its index
    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if (complementMap.find(complement) != complementMap.end())
        {
            // Complement found in map, return indices
            return {complementMap[complement], i};
        }
        // Store the index of the current number with the number as the key
        complementMap[nums[i]] = i;
    }
    // If no solution found, return an empty vector
    return {};
}

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        // No solution found
        return {};
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target);

    // Output: [0, 1]
    std::cout << "Output: [" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}
