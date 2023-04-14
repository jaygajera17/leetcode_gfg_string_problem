/* https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1?page=4&sortBy=submissions */


vector<string>find_permutation(string S)
		{
		    vector<string>v;
		    sort(S.begin(),S.end());
		    do{
		        v.push_back(S);
		    }
		    while(next_permutation(S.begin(),S.end()));
	
		    return v;
		}