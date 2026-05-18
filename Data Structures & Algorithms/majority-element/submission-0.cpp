class Solution {
public:
    static int majorityElement(std::vector<int>& nums) 
    {
        std::map <int, int> mp;
        std::map<int, int>::iterator it;
        std::vector<int>::iterator itv = nums.begin();
        int is = 1;
        int count = 0;
        for ( ; itv != nums.end(); itv++)
            mp[*itv]++;
        it = mp.begin();
        for ( ; it != mp.end(); it++)
        {   
            if ((int)it->second > count)
            {
                count = it->second;
                is = it->first;
           }
        }
        return (is);
    }
};