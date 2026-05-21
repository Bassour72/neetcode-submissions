class Solution 
{
public:
   static int singleNumber(std::vector<int>& nums) 
    {
        std::set<int> nset;
        int nbr = 0;
        for (size_t i = 0; i < nums.size(); i++)
            nbr =  nbr ^ nums[i];
       return (nbr);         
    }
};