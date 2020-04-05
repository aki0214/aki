#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
int m,n;
cin >> n>>m;
int s[m],c[m];
rep(i,m)cin >>s[i]>>c[i];
int a=0,max=1;
int b[4]={10};
rep(i,m){
    rep(j,m)if(s[i]==s[j]&&c[i]!=c[j]){
        cout <<-1<<endl;
        return 0;
    }
    if(max<s[i])max=s[i];
    b[s[i]]=c[i];
}
if((b[1]==0&&n!=1)||max!=n){
        cout <<-1<<endl;
        return 0;
}
if(b[1]==10)b[1]=1;
a=(b[1]%10)*pow(10,n-1)+(b[2]%10)*pow(10,n-2)+(b[3]%10)*pow(10,n-3);
cout <<a<<endl;

    return 0;
}