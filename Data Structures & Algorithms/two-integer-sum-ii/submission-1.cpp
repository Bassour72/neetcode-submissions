class Solution 
{
    int search(std::vector<int>& nums, int target) 
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right) 
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
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
            int complementIndex = search(nums, complement);
            
            if (complementIndex != -1)
            {
                if (complementIndex == i)
                    complementIndex++;
                result.push_back(i +1);
                result.push_back(complementIndex + 1);
                return result;
            }
        }
        return result;
    }
};
