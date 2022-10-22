
Link:- https://practice.geeksforgeeks.org/problems/longest-substring-containing-1/1

count max 1 consecutive possile

Input:
2
110
11101110
Output:
2
3


int maxlength( string s)
{
// your code here
  int max=0,count=0;;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='1')
      {
          count++;
          if(count>max)
          {
              max=count;
          }
      }
      else
      {
          
          count=0;
      }
  }
  return max;
}