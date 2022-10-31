/*

https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.


Input:
S = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole
string , the input string becomes
mno.pqr

*/

 string reverseWords(string s) 
    {
        // code here 
      reverse(s.begin(),s.end());
      int i=0;
      string st;
      vector<string>ans;
      
      string ans1="";
      int j=s.length();
      string t;
      while(s[j]!='.')  // only push when "." occur so 1st word Not pushed .
      {
          t=t+s[j];
          j--;
      }
      while(i!=s.length()+1)
      {
          if(s[i]=='.')
          {
              reverse(st.begin(),st.end()); //reverse of reverse 
              ans.push_back(st);
              ans.push_back('.');
              st="";
          }
          else
          {
             st=st+s[i];
          }
          i++;
      }
      for(auto i:ans)
      {
          ans1=ans1+i;
      }
     return ans1+t;
    }