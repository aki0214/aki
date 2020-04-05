#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    int n,m,tem=0;
    cin>>n>>m;
    int a[n],sum=0;
    rep(i,n) {
        cin>>a[i];
        sum+=a[i];
    }
    rep(i,n) {
        if(a[i]*4*m>=sum)tem++;
    }
    if(tem>=m) {
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}