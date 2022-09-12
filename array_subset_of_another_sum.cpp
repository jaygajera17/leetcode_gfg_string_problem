/*
link:- https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

problem:-
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to
check whether a2[] is a subset of a1[] or not.
Both the arrays can be sorted or unsorted.

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Input:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}
Output:
No
Explanation:
a2[] is not a subset of a1[]

*/

string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_set<int> s(a1, a1 + n);
    for (int i = 0; i < n; i++)
    {
        s.insert(a1[i]);
    }
    int cnt = 0;
    // cout<< s.size();
    for (int i = 0; i < m; i++)
    {
        if (s.count(a2[i]))
        {
            cnt++;
        }
        if (cnt == m)
        {
            return "Yes";
        }
    }
    return "No";
}

/*

OTHER APPROCH:-

string isSubset(int a1[], int a2[], int n, int m) {

   vector<int>v1(a1,a1+n);
   vector<int>v2(a2,a2+m);
   int f=0;
      vector<int>::iterator it;
    int i=0;
   while(i!=v2.size())
   {
  it=find(v1.begin(),v1.end(),v2[i]);
  i++;
  if(it!=v1.end())
  {

  }
  else
    {
       f=1;
    }
}
if(f==1)
{
    return "No";
}
else
{
    return "Yes";
}
}

*/