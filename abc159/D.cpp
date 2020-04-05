#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    int n;
    long long ans=0;
    cin >>n;
    long long a[n],num[n]={0};
    rep(i,n) {
        cin >>a[i];
        num[a[i]-1]++;
    }
    rep(i,n) {
        ans+=num[i]*(num[i]-1)/2;
    }
    rep(i,n)cout << ans-num[a[i]-1]+1 <<endl;
    return 0;
}