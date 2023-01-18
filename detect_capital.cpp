/*https://leetcode.com/problems/detect-capital/description/*/


  bool detectCapitalUse(string word) {
        int count=0;
         for(int i=0;i<word.length();i++)
         {
           if(isupper(word[i]))
           {
               count++;
           }
         }
        if(count==1 && isupper(word[0])) 
        {
          return 1;
        }
        if(count==0 || count==word.size())
        {
            return 1;
        }
        return 0;
       
    }