class Solution 
{
public:
    int longestConsecutive(std::vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        
        int longestStreak = 0;

        for (std::unordered_set<int>::iterator it = numSet.begin(); it != numSet.end(); ++it) 
        {
            int currentNum = *it;
            if (numSet.find(currentNum - 1) == numSet.end()) 
            {
                int currentStreak = 1;
                int nextNum = currentNum + 1;
                while (numSet.find(nextNum) != numSet.end()) 
                {
                    currentStreak++;
                    nextNum++;
                }
                longestStreak = std::max(longestStreak, currentStreak);
            }
        }

        return (longestStreak);
    }
};
