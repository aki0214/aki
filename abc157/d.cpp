#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)

int main(){
    int n,m,k;
    cin >>n>>m>>k;
    int a[m],b[m],c[k],d[k],pred[n]={0},gro[n]={0},num=1;
    rep(i,m){
        cin>>a[i]>>b[i];
        if(a[i]>b[i])swap(a[i],b[i]);
        }
    rep(i,k){
        cin>>c[i]>>d[i];
        if(c[i]>d[i])swap(c[i],d[i]);
        }
    rep(i,n){
        if(gro[i]==0){
            num++;
            gro[i]==num;
            for(int j = i+1;j<n;j++){
                if(gro[i]==0||)
            }
        }
    }

    return 0;
}