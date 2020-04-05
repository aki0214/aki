#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){
    long long n,a,b,c;
    cin >>n>>a>>b;
    if(n % (a+b) >a){
        c=a;
    }else{
        c=min(n % (a+b),a);
    }
    cout<<n/(a+b)*a+c<<endl;
    return 0;
}