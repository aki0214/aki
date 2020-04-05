#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)


double expect_root(n,m,s,t,i){
    tems = s[i];
    temt = t[i];
    s[i]=0;
    t[i]=0;



    s[i]=tems;
    t[i]=temt;
    return r;
}


int main(){
int n, m, e;
vector<int> s(m);
vector<int> t(m);
rep(i,m){
    cin >> s[i];
    cin >> t[i];
}

e=n;
int tems, temt;
rep(i,m)if(expect_root(n,m,s,t,i) < e)e= expect_root(n,m,s,t,i);

cout << e << endl;
}