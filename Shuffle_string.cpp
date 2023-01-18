/* https://leetcode.com/problems/shuffle-string/ */


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        char ans[n];
        for(int i=0;i<indices.size();i++)
        {
            int occ=indices[i];
            ans[occ]=s[i];
        }
        string t;
        for(int i=0;i<s.length();i++)
        {
            t=t+ans[i];
        }
        return t;
    }
};


//t[index[i]]=s[i];   one step