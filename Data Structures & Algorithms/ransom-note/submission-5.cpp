class Solution 
{
public:
   static bool canConstruct(std::string ransomNote, std::string magazine) 
    {
        int count = 0;
        std::map<size_t, char> exist;
        size_t pos = 0;
        for (size_t i = 0; i < ransomNote.length(); i++)
        {
            size_t it = magazine.find(ransomNote[i], pos);
            if (it != std::string::npos) 
            {
                if (exist.find(it) == exist.end())
                {    
                    count++; 
                    pos = 0;
                    exist.insert(std::make_pair(it, ransomNote[i]));
                }
                else 
                {   
                    pos = it + 1; 
                    // std ::cout << pos << " === \n";
                    i -= 1;
                }
            }
        }

        
        return ((int)ransomNote.length() == count);
    }
};