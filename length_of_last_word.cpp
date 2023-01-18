/* https://leetcode.com/problems/length-of-last-word/ */

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        vector<string>v;
        while(ss>>word)
        {
                v.push_back(word);
        }
        int n=v.size()-1;
        return (v[n].size());
    }
};