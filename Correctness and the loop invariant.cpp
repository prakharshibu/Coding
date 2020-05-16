#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  vector<int>v;
  int i,n,x;
  cin>>n;
  for(i=0;i<n;i++)
  {
     cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(i=0;i<n;i++)
     cout<<v[i]<<" ";
}
