/* https://leetcode.com/problems/group-anagrams/ */


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>m;
        for(string s:strs)
        {
            string temp=s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;

    }
};