/*
link:- https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1

problem:- covert integer to roman number 

Input:
n = 5
Output: V

Input:
n = 3
Output: III

*/

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
      int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
      string s[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
      string ans;
      int i=12;
      while(n>0)
      {
          int div=n/num[i];
          n=n%num[i];
          while(div--)
          {
              ans=ans+s[i];
          }
          i--;
      }
        return ans;
    }
};