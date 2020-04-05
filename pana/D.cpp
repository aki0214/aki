#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)
string a="abcdefghij";
int flag[10]={0};
string s;
int check(){
    int r=0;
    rep(i,s.size()){
        rep(j,10)if(s[i]==a[j]&&flag[j]==0){r++;flag[j]=1;}
    }
    rep(i,10)flag[i]=0;
    return r;
}

void pri(int n,int sum){
    int move = 0;
    if(n!=1){
        rep(i,sum+1){
            s+=a[i];
            pri(n-1,check());
            s=s.substr(0,s.size()-1);
        }
    }else{
        rep(i,sum+1)cout <<s+a[i]<<endl;
        return;
    }
    return;
}

int main(){
    int n;
    cin >>n;
    pri(n,0);
    return 0;
}