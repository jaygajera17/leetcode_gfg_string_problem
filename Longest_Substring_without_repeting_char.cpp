/*https://leetcode.com/problems/longest-substring-without-repeating-characters/description/*/



class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set;
        int i=0,j=0,n=s.length();
        int maxi=0;

        while(i<n && j<n)
        {
            if(set.find(s[j])==set.end())
            {
                set.insert(s[j]);
                j++;
                maxi=max(maxi,j-i);

            }
            else
            {
                set.erase(s[i]);
                i++;
            }
        }
 
        return maxi;
        }
    
};