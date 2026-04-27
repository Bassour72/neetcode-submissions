class Solution {
public:
    static bool isPalindrome(std::string s) 
    {
        std::string str = "";
        std:: string rev = "";
        if (s.empty())
            return (false);
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {    
                str += tolower(s[i]);
            }
        }
        rev = str;
        std::reverse(rev.begin(), rev.end());
        return str == rev;
    }
};
