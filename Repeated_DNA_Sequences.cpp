// https://leetcode.com/problems/repeated-dna-sequences/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>v;
        unordered_map<string,int>m;
        if(s.length()<=10) return v;
        for(int i=0;i<=s.size()-10;i++)
        {
            string str=s.substr(i,10);
            m[str]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>1) 
            {
                v.push_back(it->first);
            }
        }
        return v;
    }
};