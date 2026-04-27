class Solution {
public:
    bool isPalindrome(string s) 
    {
        string ss;
        if (s.empty())
            return (false);
        for (size_t i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
                ss.push_back(tolower(s[i]));
        }
        cout << ss << "\n";
        for (size_t i = 0; i < ss.length() / 2; i++)
        {
            if (ss[i] != ss[ss.length() -i - 1])
                return (false);
        }
        return (true);
    }
};
