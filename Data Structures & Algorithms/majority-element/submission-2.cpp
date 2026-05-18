class Solution {
public:
    static int majorityElement(std::vector<int>& nums)
    {
        std::map<int, int> mp;
        int majority = nums[0];
        int maxCount = 0;

        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        {
            mp[*it]++;
            if (mp[*it] > maxCount)
            {
                maxCount = mp[*it];
                majority = *it;
            }
        }
        return (majority);
    }
};