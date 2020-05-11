#include <bits/stdc++.h>
#include <vector>

using namespace std;
 bool pop (string j,string k) 
{ 
    int n=j.length();
    int m=k.length();
    if(n==m)
        return (j<k);
    
    return n<m;   
}

int main()
{
  vector<string>v;
  int n,i;
  cin>>n;
  string s;
  for(i=0;i<n;i++)
  {
    cin>>s;
    v.push_back(s);
  }
  sort(v.begin(),v.end(),pop);
 
  for(i=0;i<n;i++)
  {
   cout<<v[i]<<endl;
  }

}
