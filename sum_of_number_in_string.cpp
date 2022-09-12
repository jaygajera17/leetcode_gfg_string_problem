/*

link:-https://practice.geeksforgeeks.org/problems/sum-of-numbers-in-string-1587115621/1

problem:- calculate the sum of all the numbers present in the string.

Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.

Input:
str = geeks4geeks
Output: 4
Explanation: 4 is the only number, so the
sum is 4.


*/
class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    bool isDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    return false;
}

    int findSum(string str)
    {
    	int sum=0;
    	int num=0;
    	for(int i=0;i<str.length();i++)
    	{
    	    if(isDigit(str[i]))
    	    {
    	       num  =  num*10 + (str[i]-'0');  //each time add value in num untill char occur 
    	    }
    	    else 
    	    {
    	       sum=sum+num;  //if char occur then add num to sum
    	       num=0;        //reset num
    	    }
    	}
      return sum+num;  /* why sum + num?  for case 2abc12 try only return sum and dry run for  "1ab12" you may got it.*/
    	
    }
};