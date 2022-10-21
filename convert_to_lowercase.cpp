
/*
Link:- https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1
The task is to convert characters of string to lowercase.


Input: S = "ABCddE"
Output: "abcdde"
Explanation: A, B, C and E are converted to
a, b, c and E thus all uppercase characters
of the string converted to lowercase letter.

*/

string toLower(string s)
{
    // code here
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        ans = ans + s[i];
        // ans=ans+ (char)tolower(s[i]);
    }
    return ans;
}

/*

   //Using tolower() function

    string toLower(string s) {

        string ans="";
        for(int i=0;i<s.length();i++)
        {
          ans=ans+ (char)tolower(s[i]);
        }
        return ans;
    }

*/

/*
    /***** bonus *****

  //Convert to CamelCase
 s[0]=s[0]-32;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==' ')
        {
          s[i+1]=s[i+1]-32;
        }
    }
    return s;
 */
