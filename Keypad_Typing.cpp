/*

Link:- https://practice.geeksforgeeks.org/problems/keypad-typing0119/1?

problem:-

1->
2-> ABC
3-> DEF
4-> GHI
5-> JKL
6-> MNO
7-> pQRS
8-> TUV
9-> WXYZ

Input:
S = geeksforgeeks
Output: 4335736743357
Explanation:geeksforgeeks is 4335736743357
in decimal when we type it using the given
keypad.

Input:
S = geeksquiz
Output: 433577849
Explanation: geeksquiz is 433577849 in
decimal when we type it using the given
keypad.

*/

string printNumber(string s, int n) 
{
    //code here
    unordered_map <char,string> mapping;
  
    mapping['a']="2";
    mapping['b']="2";
    mapping['c']="2";
    mapping['d']="3";
    mapping['e']="3";
    mapping['f']="3";
    mapping['g']="4";
    mapping['h']="4";
    mapping['i']="4";
    mapping['j']="5";
    mapping['k']="5";
    mapping['l']="5";
    mapping['m']="6";
    mapping['n']="6";
    mapping['o']="6";
    mapping['p']="7";
    mapping['q']="7";
    mapping['r']="7";
    mapping['s']="7";
    mapping['t']="8";
    mapping['u']="8";
    mapping['v']="8";
    mapping['w']="9";
    mapping['x']="9";
    mapping['y']="9";
    mapping['z']="9";
    mapping[' ']="0";
    
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        ans=ans+mapping[s[i]];
    }
    return ans;
}