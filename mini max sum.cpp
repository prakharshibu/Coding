#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,sum=0;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int max=a[0];
  int min=a[0];
  
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
      max=a[i]; 
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<min)
      min=a[i]; 
  }
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  
  cout<<sum;
}
