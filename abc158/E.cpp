#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)
int ctoi(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return 0;
}

int main(){
    long long n,p,temp=0,ans=0;
    string s;
    cin >>n>>p>>s;
    int r[p]={0},keta[n]={0};
    int ten[n];
    ten[0]=1;
    for(int i = 1;i<n;++i){
        ten[i]=(ten[i-1]*10)%p;
    }
    rep(i,n){
        keta[n-i-1]=(ctoi(s[i])*ten[n-i-1])%p;
    }
    rep(i,n){
        temp+=keta[i];
        temp =temp%p;
        r[temp]++;
    }

    rep(i,p){
        ans+=r[i]*(r[i]-1)/2;
        }

    cout <<ans+r[0]<<endl;
    return 0;
}