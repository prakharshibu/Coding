#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,i; cin>>n;
  for(i=0;i<n;i++)
  {
    int x; cin>>x;
   if(x>=38)
    {  
    int p=5-x%5;
    int q=p+x;
    if(q-x<3)
      cout<<q<<endl;
    else
      cout<<x<<endl;  
    }
    else if(x<38)
      cout<<x<<endl;
  }
}