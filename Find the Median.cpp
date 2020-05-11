#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
  vector<int>v;
  int n,i,x,p;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  if(n%2!=0)
     p=n/2;
  else if(n%2==0)
     p=(n-1)/2;  
  
  cout<<v[p];
}