class Solution {
public:
   static bool canConstruct(std::string ransomNote, std::string magazine) 
    {
        return (magazine.find(ransomNote) != std::string::npos);
    }
};