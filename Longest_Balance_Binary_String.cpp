
/* https://leetcode.com/problems/find-the-longest-balanced-substring-of-a-binary-string/*/
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int res=0;
        string temp="01";
        while(temp.size()<=s.size())
        {
            if(s.find(temp)!=string::npos){
               res=temp.size();
            }
            temp='0'+temp+'1';
        }
        return res;

    }
};