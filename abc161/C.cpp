#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i<n;i++)

int main() {
    long long n,k;
    cin >>n>>k;
    cout<<min(n%k,abs(n%k-k))<<endl;
    return 0;
}