class Solution 
{
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) 
    {
        std::unordered_map<std::string, std::vector<std::string>> groups;
        for (size_t i = 0; i < strs.size(); i++) 
        {
            std::string original = strs[i];
            std::string key = original;
            std::sort(key.begin(), key.end());
            groups[key].push_back(original);
        }
        std::vector<std::vector<std::string>> result;
        for (auto const& pair : groups)
             result.push_back(pair.second);
        return result;
    }
};
