#include <bits/stdc++.h>

using namespace std;

int main(){ int s; int t; cin >> s >> t; int a; int b; cin >> a >> b; int m; int n;

cin >> m >> n;
int ctr1=0,ctr2=0;
vector<int> apple(m);
for(int apple_i = 0;apple_i < m;apple_i++){
   cin >> apple[apple_i];
    if(apple[apple_i]>0 && (s<=a+apple[apple_i] && a+apple[apple_i]<=t))
        ctr1++;
}
vector<int> orange(n);
for(int orange_i = 0;orange_i < n;orange_i++){
   cin >> orange[orange_i];
    if(orange[orange_i]<0 && (s<=b-abs(orange[orange_i]) && b-abs(orange[orange_i])<=t))
        ctr2++;
}

    cout<<ctr1<<"\n"<<ctr2;
