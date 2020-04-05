#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    int k,n,ans=0;
    cin >>k>>n;
    int a[n];
    rep(i,n)cin >>a[i];
    sort(a,a+n);
    rep(i,n-1){
        if(ans<a[i+1]-a[i])ans=a[i+1]-a[i];
    }
    if(ans<a[0]-a[n-1]+k)ans=a[0]-a[n-1]+k;
    cout << k-ans <<endl;
    return 0;
}