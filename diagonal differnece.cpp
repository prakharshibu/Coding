#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,j;
  int sum=0,sum1=0;
  cin>>n;
  int a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
        sum=sum+a[i][j];  
    }
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i+j==n-1)
        sum1=sum1+a[i][j];
    }
  }
  cout<<abs(sum-sum1);
}
