#include<bits/stdc++.h>
using namespace std;
 int distributeCandies(vector<int>& candyType) {
        
               int len=candyType.size();
               set<int> s1;
               for(int i=0;i<len;i++)
               {
                     s1.insert(candyType[i]);
               }
             if(s1.size()<len/2)
             {
                 return s1.size();
             }else return len/2;
        
    }
int main()
{
        int n,val;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {   
             cin>>val;
            v.push_back(val);
        }
        int ans= distributeCandies(v);
        cout<<ans<<endl;

}    