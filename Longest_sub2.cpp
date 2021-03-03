#include<bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
        
              vector<int> map(256,-1);
              int len=0,left=0,right=0;
             int n=s.size();
             while(right<n)
             {
                       if(map[s[right]]!=-1)
                       {
                                left=max(map[s[right]]+1,left);
                       }
                         map[s[right]]=right;
                         len=max(len,right-left+1);
                         right++;
            }
         return len;
    
}
int main()
{
       string s;
       cin>>s;
       int n=lengthOfLongestSubstring(s);
       cout<<n<<endl;
}