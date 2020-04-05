#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)

int main(){
    int a[3][3];
    int n;
    rep(i,3){rep(j,3)cin >> a[i][j];}
    cin >> n;
    int b[n];
    rep(i,n)cin >>b[i];
    rep(i,3){
        rep(j,3){
            rep(k,n){
            if(a[i][j]==b[k])a[i][j]=0;
            }
        }
    }
    if(a[0][0]+a[0][1]+a[0][2]==0|a[1][0]+a[1][1]+a[1][2]==0|a[2][0]+a[2][1]+a[2][2]==0|a[0][0]+a[1][0]+a[2][0]==0|a[0][1]+a[1][1]+a[2][1]==0|a[0][2]+a[1][2]+a[2][2]==0|a[0][0]+a[1][1]+a[2][2]==0|a[0][2]+a[1][1]+a[2][0]==0
       ){
        cout<<"Yes"<<endl;
    }else{
        cout <<"No"<<endl;
    }
    return 0;
}