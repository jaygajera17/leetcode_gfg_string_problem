/*
https://practice.geeksforgeeks.org/problems/power-set4302/1

Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.

Input : str = "abc"
Output: a ab abc ac b bc c
Explanation : There are 7 subsequences that 
can be formed from abc.

*/

	vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>v;
		    int n=s.length();
		    
		    for(int num=0;num<=pow(2,n)-1;num++)
		    {
		        string sub;
		        for(int i=0;i<n;i++)
		        {
		            if(num & 1<<i) // bit is set or not 
		            {
		                sub=sub+s[i];
		            }
		        }
		        if(!sub.empty()) // because empty string not consider in example
		        v.push_back(sub);
		    }
		    sort(v.begin(),v.end()); // because lexicographically-sorted order
		    return v;
		   
		}

///**** Explaination of the code****
   0 1 2
s= a b c

   0 0 0 = ""
   0 0 1 = "c"
   0 1 0 = "b"
   0 1 1 = "bc" 
   1 1 1 = "abc"
   1 0 1 = "ac"
   1 1 0 = "ab"
   1 1 1 = "abc" 

if 1 means is set bit then add to sub 

2 for loop
column = 2^n -1
row = s.length() 

T.c = O(2^n * n)

//***********bit manipuLation****************
bit is set or not 

ex: 5= 1 0 1 

0th bit is set or not ?

  1 0 1 (n)
& 0 0 1 // 1 at i th bit rest put 0  (1<<i)
_______
n & 1<<i



//**********2nd Approch *********//

//consider string array instead of int array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void subs(int index,vector<int>&v,int arr[],int n)
{
    if(index==n)
    {
        for(auto i:v)
     {
        cout<<i<<" ";
    
     }
      cout<<endl;
      return;
    }
    
    v.push_back(arr[index]);
    subs(index+1,v,arr,n);
    v.pop_back();
    
    subs(index+1,v,arr,n);
}

int main()
{
    int arr[]={1,2,3};
    int n=3;
    vector<int>v;
    subs(0,v,arr,n);
    

    return 0;
}
