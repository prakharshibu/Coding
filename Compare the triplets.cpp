#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[3],b[3],i;
  for(i=0;i<3;i++)
    cin>>a[i];
  for(i=0;i<3;i++)
    cin>>b[i];
  int c=0,d=0;
  for(i=0;i<3;i++)
  {
    if(a[i]>b[i])
      c++;
    else if(a[i]<b[i])
      d++;  
  }
  cout<<c<<" "<<d;
  }
