/* 
    NOTE:- it is imp ARRAY QUESTION NOT STRING 
    link:- https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

    problem:- Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 

Input:
n = 1
A[] = {1}
Output: 1
Explanation:
Since its the only element hence
its the only equilibrium point.

*/

// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
  int t_sum=0,sum1=0,sum2=0;
  if(n==1)
{
       return 1;
}
  for(int i=0;i<n;i++)
{
       t_sum+=arr[i];
}
  for(int i=1;i<n;i++)
{
       sum1=sum1+arr[i-1];
       sum2=t_sum-sum1-arr[i];
   
      if(sum1==sum2)
      {
          return i+1;
      }
     
}
  return -1;
}

};

