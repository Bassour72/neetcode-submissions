class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) 
    {
    
        std::map<int, int> counts;
        for (size_t i = 0; i < nums.size(); ++i) 
            counts[nums[i]]++;

        std::priority_queue<std::pair<int, int> > pq;
        
        for (std::map<int, int>::iterator it = counts.begin(); it != counts.end(); ++it) 
            pq.push(std::make_pair(it->second, it->first));

        std::vector<int> result;
        for (int i = 0; i < k&& !pq.empty(); ++i) 
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return (result);
    }
};
