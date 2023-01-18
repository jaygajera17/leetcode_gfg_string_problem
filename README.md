# gfg_string_question
 https://www.geeksforgeeks.org/top-50-string-coding-problems-for-interviews/

## Importance
- playing with characters test logic of programmer very well
- understanding of C++ Standard Template Library(STL) also increase
- frequently asked string coding questions in every coding round


## Key Points
### ascii value:-
- 48 to 57 - Number
- 65 to 90 - uppercase [(s[0]>='a'&&s[0]<='z']
- 97 to 122 - lowercase [(s[0]>='A'&&s[0]<='Z']
- lowercase = lowercase + 32


### inbuilt Method:-

- toupper:- (char)tolower(s[i]);
- tolower:- (char)toupper(s[i]);


 Transform:- 
- transform(s.begin(), s.end(), s.begin(), ::tolower);
- transform(s.begin(), s.end(), s.begin(), ::toupper);

- Find:-  s1.find(s2[i]):- it means <find s2[i] in s1>

        
