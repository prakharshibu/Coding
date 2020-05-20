#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int sum=0;
  int n,i;
  cin>>n;
  long long int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  cout<<sum;
}
