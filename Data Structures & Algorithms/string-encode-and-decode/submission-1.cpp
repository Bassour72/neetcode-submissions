class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string str;
        string temp;
        for (size_t i = 0; i < strs.size(); i++)
        
            str += strs[i] + "2#" ;
        return(str);
    }
    vector<string> decode(string s) 
    {
        vector<string> strs;
        size_t pos = - 1;
        while ( (pos = s.find('#')) != string::npos)
        {
            // if (s[pos - 1] != '2')
            //     continue;
            if (s != "")
                strs.push_back(s.substr(0, pos - 1));
            s.erase(0, pos + 1);
        }
        if (!s.empty())
            strs.push_back(s);
        return(strs);
    }
};
