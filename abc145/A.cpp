#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i<n;i++)

int main(){
int n,k,q,tem;
cin >> n>>k>>q;
int a[n] = {0};
rep(i,q){
    cin>>tem;
    a[tem-1]++;
}

rep(i,n){
    if(a[i]+(k-q)>0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
}