
class Solution 
{
    int findComplement(const std::vector<int> &nums, int targetValue, int currentIndex)
    {
        for (int j = currentIndex + 1; j < (int)nums.size(); j++)
        {
            if (nums[j] == targetValue)
                return j;
        }
        return -1;
    }

public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> result;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            int complement = target - nums[i];
            int complementIndex = findComplement(nums, complement, i);
            
            if (complementIndex != -1)
            {
                result.push_back(i);
                result.push_back(complementIndex);
                return result;
            }
        }
        return result;
    }
};