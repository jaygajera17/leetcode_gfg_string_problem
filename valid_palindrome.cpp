/* https://leetcode.com/problems/valid-palindrome/description/ */

class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(auto i:s)
        {
           if((i>='a' && i<='z')||(i>='A' && i<='Z')||(i>='0'&& i<='9') )
           {
               if(i>='A' && i<='Z')
               {
                   i=tolower(i);
                  p=p+ i;
               }
               else
               p=p+i;
           }

        }
        //if(p.length()==1) return false;
        for(int i=0;i<p.length()/2;i++)
        {
            if(p[i]!=p[p.length()-i-1])
            return false;
        }
        return 1;
    }
};