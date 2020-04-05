#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main(){
long long h,n,m=0;
cin >> h>> n;
long long a[n],b[n];
rep(i,n){cin >> a[i]>>b[i];
    m = max(m,a[i]);
    }

const long long INF = 1LL << 60;

long long dp[44000];

rep(i,44000)dp[i] = INF;

dp[20000] = 0;

rep(i,h+m){
    rep(j,n){
        chmin(dp[20000+i],dp[20000+i-a[j]]+b[j]);
    }
}
m = 100000000;
for(int i = 20000+h;i<44000;++i){
if(dp[i]<m)m=dp[i];
}


cout << m << endl;



return 0;
}
