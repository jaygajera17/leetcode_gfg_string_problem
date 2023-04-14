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
      vector<string> notations = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s;
       int i=0;
        while(num!=0)
        {
            if(num>=value[i])
            {
              s=s+notations[i];
              num=num-value[i];
            }
            else{
                i++;
            }
        }
        return s;
    }
};