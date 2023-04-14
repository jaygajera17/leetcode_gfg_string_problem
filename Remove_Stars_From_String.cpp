/* https://leetcode.com/problems/removing-stars-from-a-string/description/ */

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char c:s)
        {
            
                if(!st.empty() && c=='*')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};