// https://leetcode.com/problems/permutation-in-string/description/

class Solution {
public:
    bool checkInclusion(string p, string s) {
        
         int n=s.length();
	    int m=p.length();
	    vector<int>mt(26,0);
	    vector<int>mp(26,0);
        if(m>n) return false;
	    int count=0;
	    for(int i=0;i<m;i++) //make 1st window of pattern size
	    {
	        mp[p[i]-'a']++;
	        mt[s[i]-'a']++;
	    }
	    int left=0;
	    int right=m-1;
	    while(right<n)
	   {
	       if(mt==mp) return true;
	       
	       right++;
	       if(right!=n)
	       {
	           mt[s[right]-'a']++; //update the maping of window as window shift right side
	           
	           mt[s[left++]-'a']--;
	       }
	   }

        return false;
    }
};