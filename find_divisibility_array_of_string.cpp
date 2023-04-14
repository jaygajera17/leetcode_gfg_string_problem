/*https://leetcode.com/contest/weekly-contest-334/problems/find-the-divisibility-array-of-a-string/*/


class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>v;
        string s;
        unsigned long long int remainder=0; 
      
        for(int i=0;i<word.size();i++)
        {
         int digit=word[i]-'0';    
        
                remainder=(remainder*10 + digit)%m;
          //  int n=stoi(s);
            if(remainder==0)
            {
                
               v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
            
        }
        return v;
    }
};