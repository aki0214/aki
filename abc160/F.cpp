#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int check(int* p,int* q,int tp,int tq) {
    if(p[tp]>q[tq])return 1;
    if(p[tp]<q[tq])return 0;
    return check(p,q,tp-1,tq-1);
}

    int x,y,a,b,c,temp,temq,temr,ans=0;
int main() {
    cin >>x>>y>>a>>b>>c;
    temp=x-1;
    temq=y-1;
    temr=0;
    int p[a],q[b],r[c];
    rep(i,a)cin>>p[i];
    rep(i,b)cin>>q[i];
    rep(i,c)cin>>r[i];
    sort(p,p+a,[](int x,int y) {return x>y;});
    sort(q,q+b,[](int x,int y) {return x>y;});
    sort(r,r+c,[](int x,int y) {return x>y;});
    rep(i,x)ans+=p[i];
    rep(i,y)ans+=q[i];
    while(r[temr]>min(p[temp],q[temq])&&temp>=0&&temq>=0&&temr<c) {
        if(p[temp]>q[temq]) {
            ans+=r[temr]-q[temq];
            temr++;
            temq--;
        }else if(p[temp]<q[temq]) {
            ans+=r[temr]-p[temp];
            temr++;
            temp--;
        }else{
            if(check(p,q,temp,temq)) {
            ans+=r[temr]-q[temq];
            temr++;
            temq--;
        }else{
            ans+=r[temr]-p[temp];
            temr++;
            temp--;
        }
        }
    }
    cout << ans <<endl;
    return 0;
}