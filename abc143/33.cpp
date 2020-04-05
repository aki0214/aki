#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(long long i = 0;i<n;i++)

long long kthFunc(long long n){
    long long r,rem,ten;
    rem=n;
    rep(i,3){
        rem=rem*n%1000000007;
    }
    rem--;
    r=9*rem%1000000007;
    ten=1;

    n=n*n*n;

    while(1){
        if(n<9){
            r = (r+ten*n)%1000000007;
            cout<<r<<endl;
            return r;
        }
        n-=9;
        r = (r+ten*9)%1000000007;
        ten=(ten*10)%1000000007;
    }
}


int main(){
    long long sum=0;
    rep(i,3){
        sum = (sum+kthFunc(i+1))%1000000007;
    }
    cout<<sum<<endl;
}