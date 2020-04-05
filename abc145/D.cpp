#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)

const int MOD = 1000000007;
long long fac[2000000], finv[2000000], inv[2000000];

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < 2000000; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}


long long COM(int n, int m){
    return fac[n+m] * (finv[n] * finv[m] % MOD) % MOD;
}

int main(){
int  x,y,n,m;
cin >> x >> y;
if(((2*x-y) % 3) > 0 || ((2*y-x) % 3) > 0||2*y<x || 2*x<y){
    cout << 0 <<endl;
    return 0;
}
n = (2*y-x)/3;
m = (2*x-y)/3;
if(n>m){
swap(n,m);
}
COMinit();

cout << COM(n, m) << endl;

}