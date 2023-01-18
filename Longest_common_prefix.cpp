/*https://leetcode.com/problems/longest-common-prefix/description/*/


/*optimal*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
       sort(s.begin(),s.end());
       string s1=s[0];
       string s2=s[s.size()-1];
       string ans="";
       for(int i=0;i<s1.length();i++)
       {
               if(s1[i]==s2[i])
               {
                  ans+=s1[i];
               }
               else
               {
                   return ans;
               }
       }
       return ans;
    }
};





/*greedy */
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty()) return "";
        string temp=s[0];
        int mini=INT_MAX;
        string ans="";
        for(int i=1;i<s.size();i++)
        { int count=0;
            for(int j=0;j<s[i].size();j++)
          {
               if(s[0][j]==s[i][j])
              {
                count++;
              }
          }

            mini=min(mini,count);
            
        }
       for(int i=0;i<mini;i++)
       {
           ans+=s[0][i];
       }
        return ans;
    }
};


