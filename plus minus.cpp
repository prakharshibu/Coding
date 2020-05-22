#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  float negative=0,positive=0,count=0;
  cin>>n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<0)
      negative++;
     else if(a[i]>0)
      positive++;
    else if(a[i]==0)
      count++; 
  }
  double p,q,r;
  p=positive/n;
  q=negative/n;
  r=count/n;
  cout<<fixed<<setprecision(6)<<p<<endl<<q<<endl<<r<<endl;
  
 
}