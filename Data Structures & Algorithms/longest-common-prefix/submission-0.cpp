class Solution {
public:
    static std::string longestCommonPrefix(std::vector<std::string>& strs) 
    {
        std::string str = "";

        size_t i = 0;       
        bool is = false;
        for (size_t j = 0; j < strs[i].length(); j++)
        {
            i = 1;
            char c = strs[0][j];
            is = true;
            
            for (; i < strs.size(); i++)
            {
                if (c != strs[i][j])
                {
                    is = false;
                    break;
                }
            }
            if (is)
                str += c;
            else
                break;
            i -= 1;
        }
        
        return (str);
    }
};