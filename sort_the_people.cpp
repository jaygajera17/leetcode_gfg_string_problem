/* https://leetcode.com/problems/sort-the-people/description/ */

/* STL */
class Solution {
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>m;
        for(int i=0;i<names.size();i++)
        {
          m[heights[i]]=names[i];

        }
        vector<string>ans;
       // reverse(m.begin(),m.end());
        for(auto i=m.rbegin();i!=m.rend();i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};


/* using pair*/
class Solution {
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        for(int i=0;i<names.size();i++)
        {
            v.push_back(make_pair(heights[i],names[i]));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<string> ans;
        for(int i=0;i<names.size();i++)
        {
            ans.push_back(v[i].second);
        }
        for(auto i:v)
        {
            cout<<i.second<<" ";
        }
        return ans;
    }
};