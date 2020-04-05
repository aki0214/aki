#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    int n,x,y,ans=0;
    cin >>n>>x>>y;
    x--;
    y--;
    rep(i,n-1) {
        ans=0;
        rep(j,n-1) {
            if(j<=x){

            }else if(j>x&&j<=y) {

            }
        }
        cout << ans <<"\n";
    }
    return 0;
}