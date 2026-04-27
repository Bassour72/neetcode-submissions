class Solution {
public:
    static int maxProfit(std::vector<int>& prices) 
    {
      
        int res = 0;
        std::vector<int>::iterator max ;
        std::vector<int>::iterator  it = prices.begin();
        std::set<int> vec;
        for (; it < prices.end(); it++)
        { 
            if (vec.find( *it) == vec.end()) {
                vec.insert(*it);
                max = std::max_element(it, prices.end());
            }
            if (res  < (*max - *it))
                res = *max - *it;
        }
        return (res);
    }
};