#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n; cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=a[0],c=0;
  int min=a[0],d=0;
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      c++;
      max=a[i];
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<min)
    {
      d++;
      min=a[i];
    }
  }
  cout<<c<<" "<<d;
}
