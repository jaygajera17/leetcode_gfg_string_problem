/* https://leetcode.com/problems/remove-palindromic-subsequences/description/ */

class Solution {
public:
    int removePalindromeSub(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j)
        {
            if(s[i]!=s[j]) return 2; // subsequence-  remove all a then b if it is not palindrome 2 step.
            i++;
            j--;

        }
        return 1;

    }
};