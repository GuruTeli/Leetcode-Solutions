#include<bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {
               
                  set<char> store;
                  if(s.empty())
                  {
                      return 0;
                  }
                  int max1=INT_MIN,temp1=0;
                  for(int i=0;i<s.size();i++)
                  {
                             store.insert(s[i]);
                            for(int j=i+1;j<s.size();j++)
                            {
                                      if(store.find(s[j])==store.end())
                                      {
                                              store.insert(s[j]);
                                      }else{
                                                break; 
                                      }
                            }
                            temp1=store.size();
                            max1=max(max1,temp1);
                            store.clear();
                  }
                  return max1;

           
    }
int main()
{
       string s;
       cin>>s;
       int n=lengthOfLongestSubstring(s);
       cout<<n<<endl;
}