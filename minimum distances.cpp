#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,p,c=0,l=0,min=0;
  cin>>n;
  int a[n],b[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
   for(int k=0;k<n;k++)
   {
     for(int j=k+1;j<n;j++)
     {
        if(a[k]==a[j])
        {
          c++;
           p=j-k;
           b[l]=p;
           l++;
            }}}
   min=b[0];
   for(int i=0;i<l;i++)
   {
     if(b[i]<min)
       min=b[i];
   }
   if(c==0)
     cout<<"-1";
   else
     cout<<min;
     }
