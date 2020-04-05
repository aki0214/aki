#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    int x,y,a,b,c,tema=0,temb=0,temc=0,ans=0,flag=0;
    cin >>x>>y>>a>>b>>c;
    int p[a],q[b],r[c];
    rep(i,a)cin>>p[i];
    rep(i,b)cin>>q[i];
    rep(i,c)cin>>r[i];
    sort(p,p+a,[](int x,int y) {return x>y});
    sort(q,q+b,[](int x,int y) {return x>y});
    sort(r,r+c,[](int x,int y) {return x>y});
    while(x>0||y>0) {
        if(p[tema]>=max(q[temb],r[temc])) {
            flag=0;
        }else if(q[temb]>=max(p[tema],r[temc])) {
            flag=1;
        }else{
            flag=2;
        }
        if(flag==0) {
            ans+=p[tema];
            x--;
            tema++;
        }else if(flag==1) {
            ans+=q[temb];
            y--;
            temb++;
        }else{
            ans+=r[temc];
            z++;
            temc++;
        }
    }
    cout << ans <<endl;
    return 0;
}