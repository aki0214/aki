#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
int m,n,max=1,b[3]={10};
cin >> n>>m;
int s[m],c[m];
rep(i,m)cin >>s[i]>>c[i];

rep(i,m){
    rep(j,m){
        if(s[i]==s[j]&&c[i]!=c[j]){
            cout <<-1<<endl;
            return 0;
        }
    }
    if(max<s[i])max=s[i];
    b[s[i]-1]=c[i];
}
if(m==0){cout << (int)pow(10,n-1)<<endl; return 0;}
if(max!=n||(b[0]==0&&n!=1)){
    cout <<-1<<endl;
    return 0;
}
if(b[0]==10)b[0]=1;

int ans;
if(n==1)ans = b[0];
if(n==2)ans = b[0]*10+(b[1]%10);
if(n==3)ans = b[0]*100+(b[1]%10)*10+(b[2]%10);
cout <<ans <<endl;
    return 0;
}