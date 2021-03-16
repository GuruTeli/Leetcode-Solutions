/* 1641. Count Sorted Vowel Strings
Medium

762

22




Given an integer n, return the number of strings of length n that consist only of vowels (a, e, i, o, u) and are lexicographically sorted.

A string s is lexicographically sorted if for all valid i, s[i] is the same as or comes before s[i+1] in the alphabet.

 

Example 1:

Input: n = 1
Output: 5
Explanation: The 5 sorted strings that consist of vowels only are ["a","e","i","o","u"].
Example 2:

Input: n = 2
Output: 15
Explanation: The 15 sorted strings that consist of vowels only are
["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].
Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.
Example 3:

Input: n = 33
Output: 66045
 

Constraints:

1 <= n <= 50 */
//1. 1st SOLUTION
    int helper(int n,int temp)
    {
            int res=0;
           
           if(n==0)
               return 1;
            for(int i=temp;i<5;i++)
            {
                     
                     res+=helper(n-1,i);
                     
            }
        return res;
            
    }
int countVowelStrings(int n) {
        
            return helper(n,0);
}

//2. 2nd SOLUTION
    int countVowelStrings(int n) {
        
            //return helper(n,0);
            vector<int> v(5,1);
            for(int i=0;i<n;i++)
            {
                  for(int j=1;j<5;j++)
                  {
                      v[j]=v[j]+v[j-1];
                  }
            }
           return v[4];
        
    }