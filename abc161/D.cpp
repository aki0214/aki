#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)
int k;
int tim=0,flag=0;
int a[100000];
int check(int n) {
    string s=to_string(n);
    rep(i,s.size()) {
        if(i>0){
            if(abs((s[i]-'0')-(s[i-1]-'0'))>1)return 0;
        }
    }
    return 1;
}

    void solve(int n) {
        if(tim>=100000)return;
        rep(i,10) {
            if(abs(n%10-i)<2) {
                a[tim]=n*10+i;
                tim++;
            }
            if(flag){flag=0;}else{flag=1;}
        }
        if(flag==1)return;
        rep(i,10) {
            if(abs(n%10-i)<2) {
                flag=1;
                solve(n*10+i);
            }
        }

    }

int main() {
    solve(0);
    cin >>k;
    rep(i,k)cout << a[i] <<endl;
    cout <<a[k-1]<<endl;
    return 0;
}