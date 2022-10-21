/* 
Given a list of names, display the longest name.

link:- https://practice.geeksforgeeks.org/problems/display-longest-name0853/1

Input:
N = 5
names[] = { "Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks" }

Output:
GeeksforGeeks


*/

    int l=0;
    string ans="";
    string longest(string names[], int n)
    {
        for(int i=0;i<n;i++)
        {
            if(names[i].length()>=l)
            {
                l=names[i].length();
                ans=names[i];
            }
        }
        return ans;
    }
