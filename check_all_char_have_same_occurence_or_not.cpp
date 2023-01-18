/*https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/*/


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<int,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        vector<int>v;
        for(auto i=m.begin();i!=m.end();i++)
        {
           v.push_back(i->second);     
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=v[0])
            {
                return false;
            }
        }
        return true;
    }
};