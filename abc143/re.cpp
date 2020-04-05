//5:15~

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)


int main(){
int N,c,t,k;
cin>>N;
int h[N];
rep(i,N)cin>>h[i];
int be=0;
int en=N;
t=1;

while(t){
k=1;
    for(int i = be;i<en;i++){
        if(h[i]<=0)k=0;
        break;
    }
if(k!=0){
    c++;
    for(int i = be;i<en;i++){
        h[i]--;
    }
}else{
    t=0;
    rep(i, N){
        if(h[i]!=0){be=i;
            t=1;
            break;
        }
    }
    rep(i,N){
        if(h[i]!=0 && h[i+1]==0){
            en =i;
            break;
        }
    }
}


}
cout<<c;
}